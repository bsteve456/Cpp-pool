/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 20:11:42 by stbaleba          #+#    #+#             */
/*   Updated: 2021/01/17 12:26:14 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

# include <iostream>
# include <stack>
# include <deque>

template < class T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
	public:
		struct dlist
		{
			T elem;
			struct dlist *next;
			struct dlist *prev;
		};
		dlist *ft_lstnew(T const elem)
		{
			dlist *new1;

			new1 = new dlist();
			new1->elem = elem;
			new1->next = 0;
			new1->prev = 0;
			return (new1);
		}
		void	ft_lstadd_back(dlist **alst, dlist *new1)
		{
			dlist *lst;
			lst = *alst;
			if (!lst || lst == 0)
				*alst = new1;
			else
			{
				while (lst->next)
					lst = lst->next;
				new1->prev = lst;
				lst->next = new1;
			}
		}
		void	ft_lstpop(dlist **alst)
		{
			dlist *lst;
			dlist *prev;

			lst = *alst;
			prev = lst->prev;
			while (lst->next)
			{
				lst = lst->next;
				prev = lst->prev;
			}
			delete (lst);
			if(prev != 0)
				prev->next = 0;
		}
		using std::stack<T, Container>::c;
	public:
		MutantStack()
		{}

		MutantStack<T>(MutantStack<T> const &m)
		{
			*this = m;
		}

		MutantStack<T> & operator = (MutantStack<T> const &m)
		{
			if (this != &m)
			{
				while (!this->c.empty())
					this->c.pop_back();
				for (unsigned int i = 0; i < m.getC().size(); i++)
					this->c.push_back(m.getC()[i]);
			}
			return (*this);
		}
		Container getC() const
		{
			return (this->c);
		}
		~MutantStack()
		{
			while (!this->c.empty())
				this->c.pop_back();
		}
		class iterator: public std::iterator<std::input_iterator_tag, T>, public MutantStack<T>
	{
		private:
			dlist *it;
			dlist *temp;
		public:
			iterator() : it(0), temp(0) {}
			iterator(Container p)
			{
				this->it = 0;
				for (unsigned int i = 0; i < p.size(); i++)
					ft_lstadd_back(&(this->it), ft_lstnew(p[i]));
				this->temp = this->it;
			}
			iterator(const iterator &i) : it(i.getP()), temp(it){
			}
			iterator & operator = (const iterator &i)
			{
				if (this != &i)
				{
					this->it = i.getP();
					this->temp = this->it;
				}
				return (*this);
			}
			iterator & operator ++()
			{
				this->it = this->it->next;
				return (*this);
			}
			iterator & operator --()
			{
				this->it = this->it->prev;
				return (*this);
			}
			iterator operator++(int n)
			{
				iterator tmp(*this);
				for (int i = 0; i < n; i++)
					operator++();
				return (tmp);
			}
			int	size(dlist *t)
			{
				int count = 0;
				dlist *temp1 = t;
				if (!temp1)
					return (0);
				while (temp1)
				{
					temp1 = temp1->next;
					count++;
				}
				return (count);
			}

			T & operator * ()
			{
				return (this->it->elem);
			}
			dlist * getP() const
			{
				return (this->it);
			}
			bool operator != (iterator & other) const
			{
				return (this->it != other.getP());
			}
			~iterator(){
				while(this->size(this->temp) > 1)
					ft_lstpop(&(this->temp));
				delete this->temp;
				this->temp = 0;
			}
	};
		iterator begin()
		{
			return iterator(this->c);
		}
		iterator end()
		{
			return iterator();
		}

};

#endif
