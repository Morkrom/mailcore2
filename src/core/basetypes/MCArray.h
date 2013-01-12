#ifndef __MAILCORE_MCARRAY_H_

#define __MAILCORE_MCARRAY_H_

#include <mailcore/MCObject.h>

#include <libetpan/libetpan.h>

namespace mailcore {

	class String;

	class Array : public Object {
	private:
		carray * mArray;
		void init();
	public:
		Array();
		Array(Array * o);
		virtual ~Array();
		
		static Array * array();
		static Array * arrayWithObject(Object * obj);

		//virtual String * className();
		virtual String * description();
		virtual Object * copy();
		
		virtual unsigned int count();
		virtual void addObject(Object * obj);
		virtual void removeObjectAtIndex(unsigned int idx);
		virtual void removeObject(Object * obj);
		virtual int indexOfObject(Object * obj);
		virtual Object * objectAtIndex(unsigned int idx);
		virtual void replaceObject(unsigned int idx, Object * obj);
		virtual void insertObject(unsigned int idx, Object * obj);
		virtual void removeAllObjects();
		
		virtual void addObjectsFromArray(Array * array);
		virtual Object * lastObject();
		virtual bool containsObject(Object * obj);
		
		virtual Array * sortedArray(int (* compare)(void *, void *, void *), void * context);
		virtual String * componentsJoinedByString(String * delimiter);
	};

}

#endif