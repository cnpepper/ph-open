/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: junit.framework.Assert
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JUNIT_FRAMEWORK_ASSERT_HPP_DECL
#define J2CPP_JUNIT_FRAMEWORK_ASSERT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace junit { namespace framework {

	class Assert;
	class Assert
		: public object<Assert>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)
		J2CPP_DECLARE_METHOD(7)
		J2CPP_DECLARE_METHOD(8)
		J2CPP_DECLARE_METHOD(9)
		J2CPP_DECLARE_METHOD(10)
		J2CPP_DECLARE_METHOD(11)
		J2CPP_DECLARE_METHOD(12)
		J2CPP_DECLARE_METHOD(13)
		J2CPP_DECLARE_METHOD(14)
		J2CPP_DECLARE_METHOD(15)
		J2CPP_DECLARE_METHOD(16)
		J2CPP_DECLARE_METHOD(17)
		J2CPP_DECLARE_METHOD(18)
		J2CPP_DECLARE_METHOD(19)
		J2CPP_DECLARE_METHOD(20)
		J2CPP_DECLARE_METHOD(21)
		J2CPP_DECLARE_METHOD(22)
		J2CPP_DECLARE_METHOD(23)
		J2CPP_DECLARE_METHOD(24)
		J2CPP_DECLARE_METHOD(25)
		J2CPP_DECLARE_METHOD(26)
		J2CPP_DECLARE_METHOD(27)
		J2CPP_DECLARE_METHOD(28)
		J2CPP_DECLARE_METHOD(29)
		J2CPP_DECLARE_METHOD(30)
		J2CPP_DECLARE_METHOD(31)
		J2CPP_DECLARE_METHOD(32)
		J2CPP_DECLARE_METHOD(33)
		J2CPP_DECLARE_METHOD(34)

		explicit Assert(jobject jobj)
		: object<Assert>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static void assertTrue(local_ref< java::lang::String >  const&, jboolean);
		static void assertTrue(jboolean);
		static void assertFalse(local_ref< java::lang::String >  const&, jboolean);
		static void assertFalse(jboolean);
		static void fail(local_ref< java::lang::String >  const&);
		static void fail();
		static void assertEquals(local_ref< java::lang::String >  const&, local_ref< java::lang::Object >  const&, local_ref< java::lang::Object >  const&);
		static void assertEquals(local_ref< java::lang::Object >  const&, local_ref< java::lang::Object >  const&);
		static void assertEquals(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		static void assertEquals(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		static void assertEquals(local_ref< java::lang::String >  const&, jdouble, jdouble, jdouble);
		static void assertEquals(jdouble, jdouble, jdouble);
		static void assertEquals(local_ref< java::lang::String >  const&, jfloat, jfloat, jfloat);
		static void assertEquals(jfloat, jfloat, jfloat);
		static void assertEquals(local_ref< java::lang::String >  const&, jlong, jlong);
		static void assertEquals(jlong, jlong);
		static void assertEquals(local_ref< java::lang::String >  const&, jboolean, jboolean);
		static void assertEquals(jboolean, jboolean);
		static void assertEquals(local_ref< java::lang::String >  const&, jbyte, jbyte);
		static void assertEquals(jbyte, jbyte);
		static void assertEquals(local_ref< java::lang::String >  const&, jchar, jchar);
		static void assertEquals(jchar, jchar);
		static void assertEquals(local_ref< java::lang::String >  const&, jshort, jshort);
		static void assertEquals(jshort, jshort);
		static void assertEquals(local_ref< java::lang::String >  const&, jint, jint);
		static void assertEquals(jint, jint);
		static void assertNotNull(local_ref< java::lang::Object >  const&);
		static void assertNotNull(local_ref< java::lang::String >  const&, local_ref< java::lang::Object >  const&);
		static void assertNull(local_ref< java::lang::Object >  const&);
		static void assertNull(local_ref< java::lang::String >  const&, local_ref< java::lang::Object >  const&);
		static void assertSame(local_ref< java::lang::String >  const&, local_ref< java::lang::Object >  const&, local_ref< java::lang::Object >  const&);
		static void assertSame(local_ref< java::lang::Object >  const&, local_ref< java::lang::Object >  const&);
		static void assertNotSame(local_ref< java::lang::String >  const&, local_ref< java::lang::Object >  const&, local_ref< java::lang::Object >  const&);
		static void assertNotSame(local_ref< java::lang::Object >  const&, local_ref< java::lang::Object >  const&);
	}; //class Assert

} //namespace framework
} //namespace junit

} //namespace j2cpp

#endif //J2CPP_JUNIT_FRAMEWORK_ASSERT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JUNIT_FRAMEWORK_ASSERT_HPP_IMPL
#define J2CPP_JUNIT_FRAMEWORK_ASSERT_HPP_IMPL

namespace j2cpp {



junit::framework::Assert::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


void junit::framework::Assert::assertTrue(local_ref< java::lang::String > const &a0, jboolean a1)
{
	return call_static_method<
		junit::framework::Assert::J2CPP_CLASS_NAME,
		junit::framework::Assert::J2CPP_METHOD_NAME(1),
		junit::framework::Assert::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(a0, a1);
}

void junit::framework::Assert::assertTrue(jboolean a0)
{
	return call_static_method<
		junit::framework::Assert::J2CPP_CLASS_NAME,
		junit::framework::Assert::J2CPP_METHOD_NAME(2),
		junit::framework::Assert::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(a0);
}

void junit::framework::Assert::assertFalse(local_ref< java::lang::String > const &a0, jboolean a1)
{
	return call_static_method<
		junit::framework::Assert::J2CPP_CLASS_NAME,
		junit::framework::Assert::J2CPP_METHOD_NAME(3),
		junit::framework::Assert::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(a0, a1);
}

void junit::framework::Assert::assertFalse(jboolean a0)
{
	return call_static_method<
		junit::framework::Assert::J2CPP_CLASS_NAME,
		junit::framework::Assert::J2CPP_METHOD_NAME(4),
		junit::framework::Assert::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(a0);
}

void junit::framework::Assert::fail(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		junit::framework::Assert::J2CPP_CLASS_NAME,
		junit::framework::Assert::J2CPP_METHOD_NAME(5),
		junit::framework::Assert::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(a0);
}

void junit::framework::Assert::fail()
{
	return call_static_method<
		junit::framework::Assert::J2CPP_CLASS_NAME,
		junit::framework::Assert::J2CPP_METHOD_NAME(6),
		junit::framework::Assert::J2CPP_METHOD_SIGNATURE(6), 
		void
	>();
}

void junit::framework::Assert::assertEquals(local_ref< java::lang::String > const &a0, local_ref< java::lang::Object > const &a1, local_ref< java::lang::Object > const &a2)
{
	return call_static_method<
		junit::framework::Assert::J2CPP_CLASS_NAME,
		junit::framework::Assert::J2CPP_METHOD_NAME(7),
		junit::framework::Assert::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(a0, a1, a2);
}

void junit::framework::Assert::assertEquals(local_ref< java::lang::Object > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_static_method<
		junit::framework::Assert::J2CPP_CLASS_NAME,
		junit::framework::Assert::J2CPP_METHOD_NAME(8),
		junit::framework::Assert::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(a0, a1);
}

void junit::framework::Assert::assertEquals(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2)
{
	return call_static_method<
		junit::framework::Assert::J2CPP_CLASS_NAME,
		junit::framework::Assert::J2CPP_METHOD_NAME(9),
		junit::framework::Assert::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(a0, a1, a2);
}

void junit::framework::Assert::assertEquals(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_static_method<
		junit::framework::Assert::J2CPP_CLASS_NAME,
		junit::framework::Assert::J2CPP_METHOD_NAME(10),
		junit::framework::Assert::J2CPP_METHOD_SIGNATURE(10), 
		void
	>(a0, a1);
}

void junit::framework::Assert::assertEquals(local_ref< java::lang::String > const &a0, jdouble a1, jdouble a2, jdouble a3)
{
	return call_static_method<
		junit::framework::Assert::J2CPP_CLASS_NAME,
		junit::framework::Assert::J2CPP_METHOD_NAME(11),
		junit::framework::Assert::J2CPP_METHOD_SIGNATURE(11), 
		void
	>(a0, a1, a2, a3);
}

void junit::framework::Assert::assertEquals(jdouble a0, jdouble a1, jdouble a2)
{
	return call_static_method<
		junit::framework::Assert::J2CPP_CLASS_NAME,
		junit::framework::Assert::J2CPP_METHOD_NAME(12),
		junit::framework::Assert::J2CPP_METHOD_SIGNATURE(12), 
		void
	>(a0, a1, a2);
}

void junit::framework::Assert::assertEquals(local_ref< java::lang::String > const &a0, jfloat a1, jfloat a2, jfloat a3)
{
	return call_static_method<
		junit::framework::Assert::J2CPP_CLASS_NAME,
		junit::framework::Assert::J2CPP_METHOD_NAME(13),
		junit::framework::Assert::J2CPP_METHOD_SIGNATURE(13), 
		void
	>(a0, a1, a2, a3);
}

void junit::framework::Assert::assertEquals(jfloat a0, jfloat a1, jfloat a2)
{
	return call_static_method<
		junit::framework::Assert::J2CPP_CLASS_NAME,
		junit::framework::Assert::J2CPP_METHOD_NAME(14),
		junit::framework::Assert::J2CPP_METHOD_SIGNATURE(14), 
		void
	>(a0, a1, a2);
}

void junit::framework::Assert::assertEquals(local_ref< java::lang::String > const &a0, jlong a1, jlong a2)
{
	return call_static_method<
		junit::framework::Assert::J2CPP_CLASS_NAME,
		junit::framework::Assert::J2CPP_METHOD_NAME(15),
		junit::framework::Assert::J2CPP_METHOD_SIGNATURE(15), 
		void
	>(a0, a1, a2);
}

void junit::framework::Assert::assertEquals(jlong a0, jlong a1)
{
	return call_static_method<
		junit::framework::Assert::J2CPP_CLASS_NAME,
		junit::framework::Assert::J2CPP_METHOD_NAME(16),
		junit::framework::Assert::J2CPP_METHOD_SIGNATURE(16), 
		void
	>(a0, a1);
}

void junit::framework::Assert::assertEquals(local_ref< java::lang::String > const &a0, jboolean a1, jboolean a2)
{
	return call_static_method<
		junit::framework::Assert::J2CPP_CLASS_NAME,
		junit::framework::Assert::J2CPP_METHOD_NAME(17),
		junit::framework::Assert::J2CPP_METHOD_SIGNATURE(17), 
		void
	>(a0, a1, a2);
}

void junit::framework::Assert::assertEquals(jboolean a0, jboolean a1)
{
	return call_static_method<
		junit::framework::Assert::J2CPP_CLASS_NAME,
		junit::framework::Assert::J2CPP_METHOD_NAME(18),
		junit::framework::Assert::J2CPP_METHOD_SIGNATURE(18), 
		void
	>(a0, a1);
}

void junit::framework::Assert::assertEquals(local_ref< java::lang::String > const &a0, jbyte a1, jbyte a2)
{
	return call_static_method<
		junit::framework::Assert::J2CPP_CLASS_NAME,
		junit::framework::Assert::J2CPP_METHOD_NAME(19),
		junit::framework::Assert::J2CPP_METHOD_SIGNATURE(19), 
		void
	>(a0, a1, a2);
}

void junit::framework::Assert::assertEquals(jbyte a0, jbyte a1)
{
	return call_static_method<
		junit::framework::Assert::J2CPP_CLASS_NAME,
		junit::framework::Assert::J2CPP_METHOD_NAME(20),
		junit::framework::Assert::J2CPP_METHOD_SIGNATURE(20), 
		void
	>(a0, a1);
}

void junit::framework::Assert::assertEquals(local_ref< java::lang::String > const &a0, jchar a1, jchar a2)
{
	return call_static_method<
		junit::framework::Assert::J2CPP_CLASS_NAME,
		junit::framework::Assert::J2CPP_METHOD_NAME(21),
		junit::framework::Assert::J2CPP_METHOD_SIGNATURE(21), 
		void
	>(a0, a1, a2);
}

void junit::framework::Assert::assertEquals(jchar a0, jchar a1)
{
	return call_static_method<
		junit::framework::Assert::J2CPP_CLASS_NAME,
		junit::framework::Assert::J2CPP_METHOD_NAME(22),
		junit::framework::Assert::J2CPP_METHOD_SIGNATURE(22), 
		void
	>(a0, a1);
}

void junit::framework::Assert::assertEquals(local_ref< java::lang::String > const &a0, jshort a1, jshort a2)
{
	return call_static_method<
		junit::framework::Assert::J2CPP_CLASS_NAME,
		junit::framework::Assert::J2CPP_METHOD_NAME(23),
		junit::framework::Assert::J2CPP_METHOD_SIGNATURE(23), 
		void
	>(a0, a1, a2);
}

void junit::framework::Assert::assertEquals(jshort a0, jshort a1)
{
	return call_static_method<
		junit::framework::Assert::J2CPP_CLASS_NAME,
		junit::framework::Assert::J2CPP_METHOD_NAME(24),
		junit::framework::Assert::J2CPP_METHOD_SIGNATURE(24), 
		void
	>(a0, a1);
}

void junit::framework::Assert::assertEquals(local_ref< java::lang::String > const &a0, jint a1, jint a2)
{
	return call_static_method<
		junit::framework::Assert::J2CPP_CLASS_NAME,
		junit::framework::Assert::J2CPP_METHOD_NAME(25),
		junit::framework::Assert::J2CPP_METHOD_SIGNATURE(25), 
		void
	>(a0, a1, a2);
}

void junit::framework::Assert::assertEquals(jint a0, jint a1)
{
	return call_static_method<
		junit::framework::Assert::J2CPP_CLASS_NAME,
		junit::framework::Assert::J2CPP_METHOD_NAME(26),
		junit::framework::Assert::J2CPP_METHOD_SIGNATURE(26), 
		void
	>(a0, a1);
}

void junit::framework::Assert::assertNotNull(local_ref< java::lang::Object > const &a0)
{
	return call_static_method<
		junit::framework::Assert::J2CPP_CLASS_NAME,
		junit::framework::Assert::J2CPP_METHOD_NAME(27),
		junit::framework::Assert::J2CPP_METHOD_SIGNATURE(27), 
		void
	>(a0);
}

void junit::framework::Assert::assertNotNull(local_ref< java::lang::String > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_static_method<
		junit::framework::Assert::J2CPP_CLASS_NAME,
		junit::framework::Assert::J2CPP_METHOD_NAME(28),
		junit::framework::Assert::J2CPP_METHOD_SIGNATURE(28), 
		void
	>(a0, a1);
}

void junit::framework::Assert::assertNull(local_ref< java::lang::Object > const &a0)
{
	return call_static_method<
		junit::framework::Assert::J2CPP_CLASS_NAME,
		junit::framework::Assert::J2CPP_METHOD_NAME(29),
		junit::framework::Assert::J2CPP_METHOD_SIGNATURE(29), 
		void
	>(a0);
}

void junit::framework::Assert::assertNull(local_ref< java::lang::String > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_static_method<
		junit::framework::Assert::J2CPP_CLASS_NAME,
		junit::framework::Assert::J2CPP_METHOD_NAME(30),
		junit::framework::Assert::J2CPP_METHOD_SIGNATURE(30), 
		void
	>(a0, a1);
}

void junit::framework::Assert::assertSame(local_ref< java::lang::String > const &a0, local_ref< java::lang::Object > const &a1, local_ref< java::lang::Object > const &a2)
{
	return call_static_method<
		junit::framework::Assert::J2CPP_CLASS_NAME,
		junit::framework::Assert::J2CPP_METHOD_NAME(31),
		junit::framework::Assert::J2CPP_METHOD_SIGNATURE(31), 
		void
	>(a0, a1, a2);
}

void junit::framework::Assert::assertSame(local_ref< java::lang::Object > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_static_method<
		junit::framework::Assert::J2CPP_CLASS_NAME,
		junit::framework::Assert::J2CPP_METHOD_NAME(32),
		junit::framework::Assert::J2CPP_METHOD_SIGNATURE(32), 
		void
	>(a0, a1);
}

void junit::framework::Assert::assertNotSame(local_ref< java::lang::String > const &a0, local_ref< java::lang::Object > const &a1, local_ref< java::lang::Object > const &a2)
{
	return call_static_method<
		junit::framework::Assert::J2CPP_CLASS_NAME,
		junit::framework::Assert::J2CPP_METHOD_NAME(33),
		junit::framework::Assert::J2CPP_METHOD_SIGNATURE(33), 
		void
	>(a0, a1, a2);
}

void junit::framework::Assert::assertNotSame(local_ref< java::lang::Object > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_static_method<
		junit::framework::Assert::J2CPP_CLASS_NAME,
		junit::framework::Assert::J2CPP_METHOD_NAME(34),
		junit::framework::Assert::J2CPP_METHOD_SIGNATURE(34), 
		void
	>(a0, a1);
}


J2CPP_DEFINE_CLASS(junit::framework::Assert,"junit/framework/Assert")
J2CPP_DEFINE_METHOD(junit::framework::Assert,0,"<init>","()V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,1,"assertTrue","(Ljava/lang/String;Z)V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,2,"assertTrue","(Z)V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,3,"assertFalse","(Ljava/lang/String;Z)V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,4,"assertFalse","(Z)V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,5,"fail","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,6,"fail","()V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,7,"assertEquals","(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,8,"assertEquals","(Ljava/lang/Object;Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,9,"assertEquals","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,10,"assertEquals","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,11,"assertEquals","(Ljava/lang/String;DDD)V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,12,"assertEquals","(DDD)V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,13,"assertEquals","(Ljava/lang/String;FFF)V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,14,"assertEquals","(FFF)V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,15,"assertEquals","(Ljava/lang/String;JJ)V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,16,"assertEquals","(JJ)V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,17,"assertEquals","(Ljava/lang/String;ZZ)V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,18,"assertEquals","(ZZ)V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,19,"assertEquals","(Ljava/lang/String;BB)V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,20,"assertEquals","(BB)V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,21,"assertEquals","(Ljava/lang/String;CC)V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,22,"assertEquals","(CC)V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,23,"assertEquals","(Ljava/lang/String;SS)V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,24,"assertEquals","(SS)V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,25,"assertEquals","(Ljava/lang/String;II)V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,26,"assertEquals","(II)V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,27,"assertNotNull","(Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,28,"assertNotNull","(Ljava/lang/String;Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,29,"assertNull","(Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,30,"assertNull","(Ljava/lang/String;Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,31,"assertSame","(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,32,"assertSame","(Ljava/lang/Object;Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,33,"assertNotSame","(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,34,"assertNotSame","(Ljava/lang/Object;Ljava/lang/Object;)V")

} //namespace j2cpp

#endif //J2CPP_JUNIT_FRAMEWORK_ASSERT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION