// Generated by Haxe 4.1.1
#ifndef INCLUDED_maglev_MagLevObject
#define INCLUDED_maglev_MagLevObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_maglev_MagLevAny
#include <maglev/MagLevAny.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(maglev,MagLevAny)
HX_DECLARE_CLASS1(maglev,MagLevArray)
HX_DECLARE_CLASS1(maglev,MagLevObject)
HX_DECLARE_CLASS1(maglev,MagLevString)

namespace maglev{


class HXCPP_CLASS_ATTRIBUTES MagLevObject_obj : public  ::maglev::MagLevAny_obj
{
	public:
		typedef  ::maglev::MagLevAny_obj super;
		typedef MagLevObject_obj OBJ_;
		MagLevObject_obj();

	public:
		enum { _hx_ClassId = 0x0e9b8ca7 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="maglev.MagLevObject")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"maglev.MagLevObject"); }
		static ::hx::ObjectPtr< MagLevObject_obj > __new();
		static ::hx::ObjectPtr< MagLevObject_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MagLevObject_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MagLevObject",89,b9,1b,9e); }

		static  ::maglev::MagLevObject create();
		static ::Dynamic create_dyn();

		static int getStaticType();
		static ::Dynamic getStaticType_dyn();

		 ::haxe::ds::StringMap values;
		void clear();
		::Dynamic clear_dyn();

		bool exists(::String key);
		::Dynamic exists_dyn();

		 ::maglev::MagLevAny get(::String key);
		::Dynamic get_dyn();

		 ::maglev::MagLevArray keys();
		::Dynamic keys_dyn();

		bool remove(::String key);
		::Dynamic remove_dyn();

		void set(::String key, ::maglev::MagLevAny value);
		::Dynamic set_dyn();

		 ::haxe::ds::StringMap getStringMap();
		::Dynamic getStringMap_dyn();

		int getType();

		bool isEqual( ::maglev::MagLevAny other);

		 ::maglev::MagLevString toJson();

};

} // end namespace maglev

#endif /* INCLUDED_maglev_MagLevObject */ 
