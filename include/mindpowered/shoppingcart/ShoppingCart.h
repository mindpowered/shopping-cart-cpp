#pragma once
/*!
 * Copyright Mind Powered Corporation 2020
 * 
 * https://mindpowered.dev/
 */

#include <maglev/MagLev.h>
#include <maglev/MagLevCpp.h>
#include <maglev/CppCallbackPtr.h>
#include <maglev/CppAny.h>
#include <shoppingcart/ShoppingCart.h>
#include <haxecpp/haxe_thread.h>
#include <string>
#include <map>

void __boot_maglev();
void __boot_shoppingcart();

/*!
 * An Shopping Cart Library
 * Add items and show a summary at checkout
 */
class ShoppingCart {
public:
	ShoppingCart()
	{
		run_haxe([](){
			__boot_maglev();
			__boot_shoppingcart();
			::maglev::MagLev m0 = ::maglev::MagLev_obj::getInstance("default");
			auto o = new ::shoppingcart::ShoppingCart_obj();
			o->__construct(m0);
		});
	}
	~ShoppingCart()
	{
	}

	/*!
	 * Create a new shopping cart
	 * @param storeId 
	 * @return {std::string} cartId
	*/
	std::string Create(std::string storeId)
	{
		::maglev::CppAny ret;
		run_haxe([&ret,storeId](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			::maglev::CppAny param0 = new ::maglev::CppAny_obj();
			param0->setStdString(storeId);
			myargs.push_back(param0);
			bus->call("ShoppingCart.Create", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
		return ret->getStdString();
	}

	/*!
	 * Add an item to a cart
	 * @param cartId 
	 * @param itemId 
	 * @param qty quantity
	 * @param price price
	 * @return {double} cart item index
	*/
	double AddItem(std::string cartId, std::string itemId, double qty, double price)
	{
		::maglev::CppAny ret;
		run_haxe([&ret,cartId,itemId,qty,price](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			::maglev::CppAny param0 = new ::maglev::CppAny_obj();
			param0->setStdString(cartId);
			myargs.push_back(param0);
			::maglev::CppAny param1 = new ::maglev::CppAny_obj();
			param1->setStdString(itemId);
			myargs.push_back(param1);
			::maglev::CppAny param2 = new ::maglev::CppAny_obj();
			param2->setDouble(qty);
			myargs.push_back(param2);
			::maglev::CppAny param3 = new ::maglev::CppAny_obj();
			param3->setDouble(price);
			myargs.push_back(param3);
			bus->call("ShoppingCart.AddItem", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
		return ret->getDouble();
	}

	/*!
	 * Get a list of items in a cart
	 * @param cartId 
	 * @return {std::vector<::maglev::CppAny>} array of item objects
	*/
	std::vector<::maglev::CppAny> ListItems(std::string cartId)
	{
		::maglev::CppAny ret;
		run_haxe([&ret,cartId](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			::maglev::CppAny param0 = new ::maglev::CppAny_obj();
			param0->setStdString(cartId);
			myargs.push_back(param0);
			bus->call("ShoppingCart.ListItems", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
		std::vector<::maglev::CppAny> retarr;
		return retarr;
	}

	/*!
	 * Remove an item from a cart
	 * @param cartId 
	 * @param idx item index
	*/
	void RemoveItem(std::string cartId, double idx)
	{
		::maglev::CppAny ret;
		run_haxe([&ret,cartId,idx](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			::maglev::CppAny param0 = new ::maglev::CppAny_obj();
			param0->setStdString(cartId);
			myargs.push_back(param0);
			::maglev::CppAny param1 = new ::maglev::CppAny_obj();
			param1->setDouble(idx);
			myargs.push_back(param1);
			bus->call("ShoppingCart.RemoveItem", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
	}

	/*!
	 * Update cart item quantity
	 * @param cartId 
	 * @param idx item index
	 * @param qty quantity
	*/
	void UpdateQty(std::string cartId, double idx, double qty)
	{
		::maglev::CppAny ret;
		run_haxe([&ret,cartId,idx,qty](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			::maglev::CppAny param0 = new ::maglev::CppAny_obj();
			param0->setStdString(cartId);
			myargs.push_back(param0);
			::maglev::CppAny param1 = new ::maglev::CppAny_obj();
			param1->setDouble(idx);
			myargs.push_back(param1);
			::maglev::CppAny param2 = new ::maglev::CppAny_obj();
			param2->setDouble(qty);
			myargs.push_back(param2);
			bus->call("ShoppingCart.UpdateQty", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
	}

	/*!
	 * Count the items in a cart
	 * @param cartId 
	 * @return {double} number of items
	*/
	double CountItems(std::string cartId)
	{
		::maglev::CppAny ret;
		run_haxe([&ret,cartId](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			::maglev::CppAny param0 = new ::maglev::CppAny_obj();
			param0->setStdString(cartId);
			myargs.push_back(param0);
			bus->call("ShoppingCart.CountItems", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
		return ret->getDouble();
	}

	/*!
	 * Get a summary for a shopping cart
	 * @param cartId 
	 * @return {std::map<std::string,::maglev::CppAny>} summary
	*/
	std::map<std::string,::maglev::CppAny> GetCartSummary(std::string cartId)
	{
		::maglev::CppAny ret;
		run_haxe([&ret,cartId](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			::maglev::CppAny param0 = new ::maglev::CppAny_obj();
			param0->setStdString(cartId);
			myargs.push_back(param0);
			bus->call("ShoppingCart.GetCartSummary", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
		std::map<std::string,::maglev::CppAny> retmap;
		return retmap;
	}

	/*!
	 * Clear all items from a shopping cart
	 * @param cartId 
	*/
	void Clear(std::string cartId)
	{
		::maglev::CppAny ret;
		run_haxe([&ret,cartId](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			::maglev::CppAny param0 = new ::maglev::CppAny_obj();
			param0->setStdString(cartId);
			myargs.push_back(param0);
			bus->call("ShoppingCart.Clear", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
	}

};

