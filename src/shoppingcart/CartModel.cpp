// Generated by Haxe 4.1.1
#include <hxcpp.h>

#ifndef INCLUDED_shoppingcart_CartModel
#include <shoppingcart/CartModel.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_dc2133e6e5d2b685_5_new,"shoppingcart.CartModel","new",0xeb317855,"shoppingcart.CartModel.new","shoppingcart/CartModel.hx",5,0x2c67263c)
namespace shoppingcart{

void CartModel_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_dc2133e6e5d2b685_5_new)
            	}

Dynamic CartModel_obj::__CreateEmpty() { return new CartModel_obj; }

void *CartModel_obj::_hx_vtable = 0;

Dynamic CartModel_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CartModel_obj > _hx_result = new CartModel_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CartModel_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4cbb0cc1;
}


CartModel_obj::CartModel_obj()
{
}

void CartModel_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CartModel);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(storeId,"storeId");
	HX_MARK_END_CLASS();
}

void CartModel_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(storeId,"storeId");
}

::hx::Val CartModel_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return ::hx::Val( id ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"storeId") ) { return ::hx::Val( storeId ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CartModel_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"storeId") ) { storeId=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CartModel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("id",db,5b,00,00));
	outFields->push(HX_("storeId",1c,ce,ab,44));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CartModel_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(CartModel_obj,id),HX_("id",db,5b,00,00)},
	{::hx::fsString,(int)offsetof(CartModel_obj,storeId),HX_("storeId",1c,ce,ab,44)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CartModel_obj_sStaticStorageInfo = 0;
#endif

static ::String CartModel_obj_sMemberFields[] = {
	HX_("id",db,5b,00,00),
	HX_("storeId",1c,ce,ab,44),
	::String(null()) };

::hx::Class CartModel_obj::__mClass;

void CartModel_obj::__register()
{
	CartModel_obj _hx_dummy;
	CartModel_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shoppingcart.CartModel",e3,a9,f7,18);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CartModel_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CartModel_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CartModel_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CartModel_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shoppingcart
