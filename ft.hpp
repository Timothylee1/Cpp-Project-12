/******************************************************************************
\File ft.hpp
\Author Timothy Lee Ke xin
\Par DP email: timothykexin.lee@digipen.edu.sg
\Par Course: RSE 1202
\Par Section: Half-Open Ranges with Function Templates
\Par Programming Lab #7
\Date 02-03-2022

  \Brief
   The purpose of this laboratory is gain experience with function templates, 
   half-open ranges, pointers. The goal is to implement several templated 
   functions that perform operations on halfopen ranges such as removing 
   elements, replacing elements, searching for elements, copying one range to 
   another range, etc. Many of these functions mimic how generic algorithms in
   the C++ standard library work. The documentation and declaration is 
   displayed first, definitions are listed after. There are a total of 13 
   template functions.

- swap
    Swaps two objects. There is no return value but the two objects are
    swapped in place

- display
    Prints out the elements of the object pointed to in its first param. No
    return value.
    
- swap_ranges
    Transforms the object with all the elements that compare equal to remove_me
    removed, and returns a pointer to the new end of that range.
    
- count
    Returns the count to the number of occurences for which the elements 
    compare equal to val.
    
- find
    Returns a pointer to the first element in the range that compares equal to 
    val. If no such element is found, the function returns end.
    
- min_element
    Returns a pointer to the element with the smallest value in the range.
    
- max_element
    Returns a pointer to the element with the largest value in the range.
    
- copy
    Copies the elements in the range into the other range and returns a pointer
    to the end of the other range.
    
- fill
    No return value but assigns val to all the elements in the range.
        
- replace
    No return value but assigns new_value to all the elements in the range
    that compare equal to old_value.
        
- equal
    Returns boolean expression for whether the elements in both ranges are
    equal; true is equal, false is not equal.
        
- sum
    Returns the sum of the elements in the range.
    
******************************************************************************/

//-------------------------------------------------------------------------
#ifndef FT_H
#define FT_H
//-------------------------------------------------------------------------
#include <iostream>


namespace hlp2 {
  // K'm providing the declaration and documentation for swap here:
  /****************************************************************************/
  /*!
  \brief
    Swaps two objects. There is no return value but the two objects are
    swapped in place.

  \param left
    Reference to the first object to swap.

  \param right
  Reference to the second object to swap.
  */
  /****************************************************************************/
  template <typename A> void swap(A &left, A &right);

  
  /****************************************************************************/
  /*!
  \brief
    Prints out the elements of the object pointed to in its first param. No
    return value.

  \param begin
    Pointer to the first element of the object to print.

  \param end
    Pointer to the half-open ranged object, signifying the exclusion of this 
    last element.
  */
  /****************************************************************************/  
  template <typename B> void display(B *begin, B *end);

  
  /****************************************************************************/
  /*!
  \brief
    Swaps two objects within a given range. There is no return value, but the
    two objects are swapped in place.

  \param begin
    Pointer to the first element of the object to be swapped.

  \param end
    Pointer to the half-open ranged object, signifying the exclusion of this 
    last element.

  \param other
    Pointer to the first element of second object to be swapped with.
  */
  /****************************************************************************/  
  template <typename C> void swap_ranges(C *begin, C *end, C *other);

  
  /****************************************************************************/
  /*!
  \brief
    Transforms the object with all the elements that compare equal to remove_me
    removed, and returns a pointer to the new end of that range.

  \param begin
    Pointer to the first element of the object.

  \param end
    Pointer to the half-open ranged object, signifying the exclusion of this 
    last element.

  \param remove_me
    A reference variable const to be removed from the object.
  */
  /****************************************************************************/    
  template <typename D> D* remove(D *begin, D *end, const D& remove_me);

  
  /****************************************************************************/
  /*!
  \brief
    Returns the count to the number of occurences for which the elements 
    compare equal to val.

  \param begin
    Pointer to the first element of the object.

  \param end
    Pointer to the half-open ranged object, signifying the exclusion of this 
    last element.

  \param val
    A reference to a const variable to be compared with.
  */
  /****************************************************************************/   
  template <typename E, typename C> int count(E *begin, E *end, C const& val);

  
  /****************************************************************************/
  /*!
  \brief
    Returns a pointer to the first element in the range that compares equal to 
    val. If no such element is found, the function returns end.

  \param begin
    Pointer to the first element of the object.

  \param end
    Pointer to the half-open ranged object, signifying the exclusion of this 
    last element.

  \param val
    A reference to a const variable to be found.
  */
  /****************************************************************************/ 
  template <typename F, typename G> F* find(F *begin, F *end, G const& val);

  
  /****************************************************************************/
  /*!
  \brief
    Returns a pointer to the element with the smallest value in the range.

  \param begin
    Pointer to the first element of the object.

  \param end
    Pointer to the half-open ranged object, signifying the exclusion of this 
    last element.
  */
  /****************************************************************************/ 
  template<class ForwardIt>
  ForwardIt min_element(ForwardIt begin, ForwardIt end);

  
  /****************************************************************************/
  /*!
  \brief
    Returns a pointer to the element with the largest value in the range.

  \param begin
    Pointer to the first element of the object.

  \param end
    Pointer to the half-open ranged object, signifying the exclusion of this 
    last element.
  */
  /****************************************************************************/   
  template<class ForwardIt>
  ForwardIt max_element(ForwardIt begin, ForwardIt end);

  
  /****************************************************************************/
  /*!
  \brief
    Copies the elements in the range into the other range and returns a pointer
    to the end of the other range.

  \param begin
    Pointer to the first element of the object.

  \param end
    Pointer to the half-open ranged object, signifying the exclusion of this 
    last element.

  \param other
    Pointer to the first element of the second object to contain the copied
    contents of the first.
  */
  /****************************************************************************/   
  template <typename H, typename I> I* copy(H *begin, H *end, I *other);

  
  /****************************************************************************/
  /*!
  \brief
    No return value but assigns val to all the elements in the range.

  \param begin
    Pointer to the first element of the object.

  \param end
    Pointer to the half-open ranged object, signifying the exclusion of this 
    last element.

  \param val
    A reference to a const variable to fill the elements of the object.
  */
  /****************************************************************************/   
  template <typename J, typename K> void fill(J *begin, J *end, K const& val);

  
  /****************************************************************************/
  /*!
  \brief
    No return value but assigns new_value to all the elements in the range
    that compare equal to old_value.

  \param begin
    Pointer to the first element of the object.

  \param end
    Pointer to the half-open ranged object, signifying the exclusion of this 
    last element.

  \param old
    Represents the old value to be replaced with the ne value.
  
  \param ne
    Represents the new value to replace with the old value.
  */
  /****************************************************************************/   
  template <typename L, typename M> 
  void replace(L *begin, L *end, M const& ol, M const& ne);

  
  /****************************************************************************/
  /*!
  \brief
    Returns boolean expression for whether the elements in both ranges are
    equal; true is equal, false is not equal.

  \param begin
    Pointer to the first element of the object.

  \param end
    Pointer to the half-open ranged object, signifying the exclusion of this 
    last element.

  \param other
    Pointer to the first element of the second object be compared against.
  */
  /**************************************************************************/   
  template <typename N, typename M> bool equal(N *begin, N *end, M *other);

  
  /****************************************************************************/
  /*!
  \brief
    Returns the sum of the elements in the range.

  \param begin
    Pointer to the first element of the object.

  \param end
    Pointer to the half-open ranged object, signifying the exclusion of this 
    last element.
  */
  /****************************************************************************/     
  template <typename O> O sum(O *begin, O *end);



  template <typename A> void swap(A &left, A &right) { 
    A tmp {right};
    right = left;
    left = tmp;
  }

  template <typename B> void display(B *begin, B *end) {
    while (begin < end){
        std::cout << *begin;
        if (begin++ < end-1)
          std::cout << ", ";
    }
    std::cout << "\n";
  }

  template <typename C> void swap_ranges(C *begin, C *end, C *other){
      while (begin < end) {
          C tmp = *begin;
          *begin++ = *other;
          *other++ = tmp;
      }
  }

  template <typename D> D* remove(D *begin, D *end, const D& remove_me) {
    D *result = begin;
    while (begin != end) {
      if (!(*begin == remove_me)) {
        if (result != begin)
          *result = std::move(*begin);
        ++result;
      }
      ++begin;
    }
    return result;
  }

  template <typename E, typename C> int count(E *begin, E *end, C const& val) {
      int count{};
      while (begin < end) {
          if (*begin++ == val)
              count++;
      }
      return count;
  }
  
  template <typename F, typename G> F* find(F *begin, F *end, G const& val) {
      while (begin < end) {
          if (*begin == val) {
              return begin;
          }
          begin++;
      }
      return end;
  }

  template<class ForwardIt>
  ForwardIt min_element(ForwardIt begin, ForwardIt end) {
      if (begin == end) return end;
  
      ForwardIt smallest = begin;
      ++begin;
      for (; begin != end; ++begin) {
          if (*begin < *smallest) {
              smallest = begin;
          }
      }
      return smallest;
  }

  template<class ForwardIt> 
  ForwardIt max_element(ForwardIt begin, ForwardIt end) {
      if (begin == end) return end;
  
      ForwardIt largest = begin;
      ++begin;
      for (; begin != end; ++begin) {
          if (*largest < *begin) {
              largest = begin;
          }
      }
      return largest;
  }

  template <typename H, typename I> I* copy(H *begin, H *end, I *other) { 
      while (begin < end) {
          *other++ = *begin++;
      }
      return other;
  }

  template <typename J, typename K> void fill(J *begin, J *end, K const& val) { 
      while (begin < end) {
          *begin++ = val;
      }
  }

  template <typename L, typename M> 
    void replace(L *begin, L *end, M const& ol, M const& ne) { 
      while (begin < end) {
          if (*begin == ol)
              *begin = ne;
          begin++;
      }
  }

  template <typename N, typename M> bool equal(N *begin, N *end, M *other) { 
      while (begin < end) {
          if (*other++ != *begin++)
              return 0;
      }
      return 1;
  }

  template <typename O> O sum(O *begin, O *end) {
      O summ{};
      while (begin < end) {
          summ += *begin++;
      }
      return summ;
  }

}

#endif
//-------------------------------------------------------------------------
