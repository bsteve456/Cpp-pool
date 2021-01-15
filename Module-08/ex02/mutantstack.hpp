/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 20:11:42 by stbaleba          #+#    #+#             */
/*   Updated: 2021/01/15 17:37:53 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

# include <iostream>
# include <stack>

template < class T >
class MutantStack
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
		T	& ft_lstop(dlist **alst)
		{
			dlist *lst;

			lst = *alst;
			if (!lst)
				return (this->err);
			while (lst->next)
				lst = lst->next;
			return (lst->elem);
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
	private:
		dlist *lst;
		T err;
	public:
		MutantStack() : lst(0), err(0)
		{}

		MutantStack<T>(MutantStack<T> const &m) : lst(0)
		{
			*this = m;
		}

		MutantStack<T> & operator = (MutantStack<T> const &m)
		{
			if (this != &m)
			{
				while (!this->empty())
					this->pop();
				for (int i = 0; i < m.size(); i++)
					this->push(m.getListElem(i));
			}
			return (*this);
		}
		int	getListElem(int n) const
		{
			if (n >= this->size())
				return (-1);
			dlist *tmp = this->lst;
			for(int i = 0; i < n; i++)
				tmp = tmp->next;
			return (tmp->elem);
		
		}
		int		size() const
		{
			int count = 0;
			dlist *temp = this->lst;
			if (!temp)
				return (0);
			while (temp)
			{
				temp = temp->next;
				count++;
			}
			return (count);
		}

		bool	empty()
		{
			if (this->size() == 0)
				return (true);
			return (false);
		}

		T & top()
		{
			return (ft_lstop(&(this->lst)));
		}
		void push(T elem)
		{
			ft_lstadd_back(&lst, ft_lstnew(elem));
		}

		void pop()
		{
			if (this->size() == 1)
			{
				delete this->lst;
				this->lst = 0;
			}
			else
				ft_lstpop(&lst);
		}
		~MutantStack()
		{
			while (!this->empty())
				this->pop();
		}
		class iterator: public std::iterator<std::input_iterator_tag, T>
	{
		private:
			dlist *p;
		public:
			iterator() : p(0) {}
			iterator(dlist *p) : p(p) {}
			iterator(const iterator &i) : p(i.getP()) {}
			iterator & operator = (const iterator &i)
			{
				this->p = i.getP();
				return (*this);
			}
			iterator & operator ++()
			{
				p = p->next;
				return (*this);
			}
			iterator & operator --()
			{
				p = p->prev;
				return (*this);
			}
			iterator operator++(int n)
			{
				iterator tmp(*this);
				for (int i = 0; i < n; i++)
					operator++();
				return (tmp);
			}

			T & operator * ()
			{
				return (p->elem);
			}
			dlist * getP() const
			{
				return (this->p);
			}
			bool operator != (iterator & other) const
			{
				return (this->p != other.getP());
			}
			~iterator(){}
	};
		iterator begin()
		{
			return iterator(this->lst);
		}
		iterator end()
		{
			return 0;
		}

};

#endif
