/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.view.accessibility.AccessibilityEventSource
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYEVENTSOURCE_HPP_DECL
#define J2CPP_ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYEVENTSOURCE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace view { namespace accessibility { class AccessibilityEvent; } } } }


#include <android/view/accessibility/AccessibilityEvent.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace view { namespace accessibility {

	class AccessibilityEventSource;
	class AccessibilityEventSource
		: public object<AccessibilityEventSource>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit AccessibilityEventSource(jobject jobj)
		: object<AccessibilityEventSource>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		void sendAccessibilityEvent(jint);
		void sendAccessibilityEventUnchecked(local_ref< android::view::accessibility::AccessibilityEvent >  const&);
	}; //class AccessibilityEventSource

} //namespace accessibility
} //namespace view
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYEVENTSOURCE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYEVENTSOURCE_HPP_IMPL
#define J2CPP_ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYEVENTSOURCE_HPP_IMPL

namespace j2cpp {



android::view::accessibility::AccessibilityEventSource::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void android::view::accessibility::AccessibilityEventSource::sendAccessibilityEvent(jint a0)
{
	return call_method<
		android::view::accessibility::AccessibilityEventSource::J2CPP_CLASS_NAME,
		android::view::accessibility::AccessibilityEventSource::J2CPP_METHOD_NAME(0),
		android::view::accessibility::AccessibilityEventSource::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject(), a0);
}

void android::view::accessibility::AccessibilityEventSource::sendAccessibilityEventUnchecked(local_ref< android::view::accessibility::AccessibilityEvent > const &a0)
{
	return call_method<
		android::view::accessibility::AccessibilityEventSource::J2CPP_CLASS_NAME,
		android::view::accessibility::AccessibilityEventSource::J2CPP_METHOD_NAME(1),
		android::view::accessibility::AccessibilityEventSource::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::view::accessibility::AccessibilityEventSource,"android/view/accessibility/AccessibilityEventSource")
J2CPP_DEFINE_METHOD(android::view::accessibility::AccessibilityEventSource,0,"sendAccessibilityEvent","(I)V")
J2CPP_DEFINE_METHOD(android::view::accessibility::AccessibilityEventSource,1,"sendAccessibilityEventUnchecked","(Landroid/view/accessibility/AccessibilityEvent;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYEVENTSOURCE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
