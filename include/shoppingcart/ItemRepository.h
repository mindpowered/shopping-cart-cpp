// Generated by Haxe 4.1.1
#ifndef INCLUDED_shoppingcart_ItemRepository
#define INCLUDED_shoppingcart_ItemRepository

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_16d41c6fc5b8bf5d
#define INCLUDED_16d41c6fc5b8bf5d
#include "maglev/MagLev.h"
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(shoppingcart,ItemModel)
HX_DECLARE_CLASS1(shoppingcart,ItemRepository)

namespace shoppingcart{


class HXCPP_CLASS_ATTRIBUTES ItemRepository_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ItemRepository_obj OBJ_;
		ItemRepository_obj();

	public:
		enum { _hx_ClassId = 0x61f3e465 };

		void __construct( ::maglev::MagLev bus);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="shoppingcart.ItemRepository")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"shoppingcart.ItemRepository"); }
		static ::hx::ObjectPtr< ItemRepository_obj > __new( ::maglev::MagLev bus);
		static ::hx::ObjectPtr< ItemRepository_obj > __alloc(::hx::Ctx *_hx_ctx, ::maglev::MagLev bus);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ItemRepository_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ItemRepository",9d,92,f7,89); }

		 ::maglev::MagLev bus;
		 ::haxe::ds::StringMap items;
		void Add( ::shoppingcart::ItemModel item, ::Dynamic callback);
		::Dynamic Add_dyn();

		void Edit( ::shoppingcart::ItemModel item, ::Dynamic callback);
		::Dynamic Edit_dyn();

		void Remove(::String cartId,int idx, ::Dynamic callback);
		::Dynamic Remove_dyn();

		void FindByCartId(::String cartId, ::Dynamic callback);
		::Dynamic FindByCartId_dyn();

		void FindByCartIdAndIdx(::String cartId,int idx, ::Dynamic callback);
		::Dynamic FindByCartIdAndIdx_dyn();

};

} // end namespace shoppingcart

#endif /* INCLUDED_shoppingcart_ItemRepository */ 
