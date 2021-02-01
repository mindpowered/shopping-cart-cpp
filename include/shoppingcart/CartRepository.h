// Generated by Haxe 4.1.1
#ifndef INCLUDED_shoppingcart_CartRepository
#define INCLUDED_shoppingcart_CartRepository

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_16d41c6fc5b8bf5d
#define INCLUDED_16d41c6fc5b8bf5d
#include "maglev/MagLev.h"
#endif
HX_DECLARE_CLASS1(shoppingcart,CartModel)
HX_DECLARE_CLASS1(shoppingcart,CartRepository)

namespace shoppingcart{


class HXCPP_CLASS_ATTRIBUTES CartRepository_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CartRepository_obj OBJ_;
		CartRepository_obj();

	public:
		enum { _hx_ClassId = 0x1d81dd02 };

		void __construct( ::maglev::MagLev bus);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="shoppingcart.CartRepository")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"shoppingcart.CartRepository"); }
		static ::hx::ObjectPtr< CartRepository_obj > __new( ::maglev::MagLev bus);
		static ::hx::ObjectPtr< CartRepository_obj > __alloc(::hx::Ctx *_hx_ctx, ::maglev::MagLev bus);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CartRepository_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CartRepository",aa,cd,6b,a9); }

		 ::maglev::MagLev bus;
		::Array< ::Dynamic> carts;
		int counter;
		void Add( ::shoppingcart::CartModel cart, ::Dynamic callback);
		::Dynamic Add_dyn();

		void Remove(::String cartId, ::Dynamic callback);
		::Dynamic Remove_dyn();

};

} // end namespace shoppingcart

#endif /* INCLUDED_shoppingcart_CartRepository */ 