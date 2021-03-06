﻿/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

GacGen.exe Resource.xml

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#include "GacPassReflection.h"

#if defined( _MSC_VER)
#pragma warning(push)
#pragma warning(disable:4250)
#elif defined(__GNUC__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wparentheses-equality"
#elif defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wparentheses-equality"
#endif

/***********************************************************************
Reflection
***********************************************************************/

namespace vl
{
	namespace reflection
	{
		namespace description
		{
#ifndef VCZH_DEBUG_NO_REFLECTION
			IMPL_CPP_TYPE_INFO(gacpass::CodeBookWindow)
			IMPL_CPP_TYPE_INFO(gacpass::CodeBookWindowConstructor)
			IMPL_CPP_TYPE_INFO(gacpass::EditCodeWindow)
			IMPL_CPP_TYPE_INFO(gacpass::EditCodeWindowConstructor)
			IMPL_CPP_TYPE_INFO(gacpass::ICode)
			IMPL_CPP_TYPE_INFO(gacpass::ICodeBookViewModel)
			IMPL_CPP_TYPE_INFO(gacpass::IEditCodeViewModel)
			IMPL_CPP_TYPE_INFO(gacpass::IKey)
			IMPL_CPP_TYPE_INFO(gacpass::ILoginViewModel)
			IMPL_CPP_TYPE_INFO(gacpass::IRegisterViewModel)
			IMPL_CPP_TYPE_INFO(gacpass::IViewModel)
			IMPL_CPP_TYPE_INFO(gacpass::LoginWindow)
			IMPL_CPP_TYPE_INFO(gacpass::LoginWindowConstructor)
			IMPL_CPP_TYPE_INFO(gacpass::MainWindow)
			IMPL_CPP_TYPE_INFO(gacpass::MainWindowConstructor)
			IMPL_CPP_TYPE_INFO(gacpass::RegisterWindow)
			IMPL_CPP_TYPE_INFO(gacpass::RegisterWindowConstructor)

#define _ ,
			BEGIN_CLASS_MEMBER(::gacpass::CodeBookWindow)
				CLASS_MEMBER_BASE(::vl::presentation::controls::GuiCustomControl)
				CLASS_MEMBER_BASE(::gacpass::CodeBookWindowConstructor)
				CLASS_MEMBER_CONSTRUCTOR(::gacpass::CodeBookWindow*(::vl::Ptr<::gacpass::ICodeBookViewModel>, ::vl::presentation::controls::GuiWindow*), { L"__vwsn_ctor_parameter_ViewModel" _ L"__vwsn_ctor_parameter_MainWindow" })
				CLASS_MEMBER_METHOD(GetMainWindow, NO_PARAMETER)
				CLASS_MEMBER_METHOD(GetViewModel, NO_PARAMETER)
				CLASS_MEMBER_FIELD(__vwsn_parameter_MainWindow)
				CLASS_MEMBER_FIELD(__vwsn_parameter_ViewModel)
				CLASS_MEMBER_PROPERTY_READONLY(MainWindow, GetMainWindow)
				CLASS_MEMBER_PROPERTY_READONLY(ViewModel, GetViewModel)
			END_CLASS_MEMBER(::gacpass::CodeBookWindow)

			BEGIN_CLASS_MEMBER(::gacpass::CodeBookWindowConstructor)
				CLASS_MEMBER_BASE(::vl::reflection::DescriptableObject)
				CLASS_MEMBER_CONSTRUCTOR(::vl::Ptr<::gacpass::CodeBookWindowConstructor>(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(__vwsn_gacpass_CodeBookWindow_Initialize, { L"__vwsn_this_" })
				CLASS_MEMBER_FIELD(__vwsn_precompile_0)
				CLASS_MEMBER_FIELD(__vwsn_precompile_1)
				CLASS_MEMBER_FIELD(__vwsn_precompile_10)
				CLASS_MEMBER_FIELD(__vwsn_precompile_11)
				CLASS_MEMBER_FIELD(__vwsn_precompile_12)
				CLASS_MEMBER_FIELD(__vwsn_precompile_13)
				CLASS_MEMBER_FIELD(__vwsn_precompile_14)
				CLASS_MEMBER_FIELD(__vwsn_precompile_2)
				CLASS_MEMBER_FIELD(__vwsn_precompile_3)
				CLASS_MEMBER_FIELD(__vwsn_precompile_4)
				CLASS_MEMBER_FIELD(__vwsn_precompile_5)
				CLASS_MEMBER_FIELD(__vwsn_precompile_6)
				CLASS_MEMBER_FIELD(__vwsn_precompile_7)
				CLASS_MEMBER_FIELD(__vwsn_precompile_8)
				CLASS_MEMBER_FIELD(__vwsn_precompile_9)
				CLASS_MEMBER_FIELD(MainWindow)
				CLASS_MEMBER_FIELD(ViewModel)
				CLASS_MEMBER_FIELD(commandEditCode)
				CLASS_MEMBER_FIELD(commandNewCode)
				CLASS_MEMBER_FIELD(commandRemoveCode)
				CLASS_MEMBER_FIELD(listViewCodes)
				CLASS_MEMBER_FIELD(self)
				CLASS_MEMBER_FIELD(textBoxSearch)
			END_CLASS_MEMBER(::gacpass::CodeBookWindowConstructor)

			BEGIN_CLASS_MEMBER(::gacpass::EditCodeWindow)
				CLASS_MEMBER_BASE(::vl::presentation::controls::GuiWindow)
				CLASS_MEMBER_BASE(::gacpass::EditCodeWindowConstructor)
				CLASS_MEMBER_CONSTRUCTOR(::gacpass::EditCodeWindow*(::vl::Ptr<::gacpass::IEditCodeViewModel>), { L"__vwsn_ctor_parameter_ViewModel" })
				CLASS_MEMBER_METHOD(GetForEdit, NO_PARAMETER)
				CLASS_MEMBER_METHOD(GetViewModel, NO_PARAMETER)
				CLASS_MEMBER_METHOD(SetForEdit, { L"__vwsn_value_" })
				CLASS_MEMBER_EVENT(ForEditChanged)
				CLASS_MEMBER_FIELD(__vwsn_parameter_ViewModel)
				CLASS_MEMBER_FIELD(__vwsn_prop_ForEdit)
				CLASS_MEMBER_PROPERTY_EVENT(ForEdit, GetForEdit, SetForEdit, ForEditChanged)
				CLASS_MEMBER_FIELD(Ready)
				CLASS_MEMBER_PROPERTY_READONLY(ViewModel, GetViewModel)
			END_CLASS_MEMBER(::gacpass::EditCodeWindow)

			BEGIN_CLASS_MEMBER(::gacpass::EditCodeWindowConstructor)
				CLASS_MEMBER_BASE(::vl::reflection::DescriptableObject)
				CLASS_MEMBER_CONSTRUCTOR(::vl::Ptr<::gacpass::EditCodeWindowConstructor>(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(__vwsn_gacpass_EditCodeWindow_Initialize, { L"__vwsn_this_" })
				CLASS_MEMBER_FIELD(__vwsn_precompile_0)
				CLASS_MEMBER_FIELD(__vwsn_precompile_1)
				CLASS_MEMBER_FIELD(__vwsn_precompile_10)
				CLASS_MEMBER_FIELD(__vwsn_precompile_11)
				CLASS_MEMBER_FIELD(__vwsn_precompile_12)
				CLASS_MEMBER_FIELD(__vwsn_precompile_13)
				CLASS_MEMBER_FIELD(__vwsn_precompile_14)
				CLASS_MEMBER_FIELD(__vwsn_precompile_15)
				CLASS_MEMBER_FIELD(__vwsn_precompile_16)
				CLASS_MEMBER_FIELD(__vwsn_precompile_17)
				CLASS_MEMBER_FIELD(__vwsn_precompile_18)
				CLASS_MEMBER_FIELD(__vwsn_precompile_19)
				CLASS_MEMBER_FIELD(__vwsn_precompile_2)
				CLASS_MEMBER_FIELD(__vwsn_precompile_20)
				CLASS_MEMBER_FIELD(__vwsn_precompile_21)
				CLASS_MEMBER_FIELD(__vwsn_precompile_22)
				CLASS_MEMBER_FIELD(__vwsn_precompile_23)
				CLASS_MEMBER_FIELD(__vwsn_precompile_24)
				CLASS_MEMBER_FIELD(__vwsn_precompile_25)
				CLASS_MEMBER_FIELD(__vwsn_precompile_26)
				CLASS_MEMBER_FIELD(__vwsn_precompile_27)
				CLASS_MEMBER_FIELD(__vwsn_precompile_28)
				CLASS_MEMBER_FIELD(__vwsn_precompile_29)
				CLASS_MEMBER_FIELD(__vwsn_precompile_3)
				CLASS_MEMBER_FIELD(__vwsn_precompile_4)
				CLASS_MEMBER_FIELD(__vwsn_precompile_5)
				CLASS_MEMBER_FIELD(__vwsn_precompile_6)
				CLASS_MEMBER_FIELD(__vwsn_precompile_7)
				CLASS_MEMBER_FIELD(__vwsn_precompile_8)
				CLASS_MEMBER_FIELD(__vwsn_precompile_9)
				CLASS_MEMBER_FIELD(ViewModel)
				CLASS_MEMBER_FIELD(hTrackerCodeLength)
				CLASS_MEMBER_FIELD(hTrackerSpecialCharLength)
				CLASS_MEMBER_FIELD(self)
				CLASS_MEMBER_FIELD(textBoxPassword)
				CLASS_MEMBER_FIELD(textBoxUsername)
				CLASS_MEMBER_FIELD(textBoxWebsite)
			END_CLASS_MEMBER(::gacpass::EditCodeWindowConstructor)

			BEGIN_INTERFACE_MEMBER(::gacpass::ICode)
				CLASS_MEMBER_BASE(::vl::reflection::IDescriptable)
				CLASS_MEMBER_METHOD(GetHidePassword, NO_PARAMETER)
				CLASS_MEMBER_METHOD(GetId, NO_PARAMETER)
				CLASS_MEMBER_METHOD(GetPassword, NO_PARAMETER)
				CLASS_MEMBER_METHOD(GetUsername, NO_PARAMETER)
				CLASS_MEMBER_METHOD(GetWebsite, NO_PARAMETER)
				CLASS_MEMBER_METHOD(SetId, { L"__vwsn_value_" })
				CLASS_MEMBER_METHOD(SetPassword, { L"__vwsn_value_" })
				CLASS_MEMBER_METHOD(SetUsername, { L"__vwsn_value_" })
				CLASS_MEMBER_METHOD(SetWebsite, { L"__vwsn_value_" })
				CLASS_MEMBER_METHOD(Update, { L"code" })
				CLASS_MEMBER_PROPERTY_READONLY(HidePassword, GetHidePassword)
				CLASS_MEMBER_PROPERTY(Id, GetId, SetId)
				CLASS_MEMBER_PROPERTY(Password, GetPassword, SetPassword)
				CLASS_MEMBER_PROPERTY(Username, GetUsername, SetUsername)
				CLASS_MEMBER_PROPERTY(Website, GetWebsite, SetWebsite)
			END_INTERFACE_MEMBER(::gacpass::ICode)

			BEGIN_INTERFACE_MEMBER(::gacpass::ICodeBookViewModel)
				CLASS_MEMBER_BASE(::vl::reflection::IDescriptable)
				CLASS_MEMBER_METHOD(AddCode, { L"code" })
				CLASS_MEMBER_METHOD(CreateEditCodeViewModel, NO_PARAMETER)
				CLASS_MEMBER_METHOD(GetCodes, NO_PARAMETER)
				CLASS_MEMBER_METHOD(GetSearch, NO_PARAMETER)
				CLASS_MEMBER_METHOD(GetSelectedCode, NO_PARAMETER)
				CLASS_MEMBER_METHOD(OnItemLeftButtonDoubleClick, { L"arguments" })
				CLASS_MEMBER_METHOD(RemoveCode, { L"code" })
				CLASS_MEMBER_METHOD(SetSearch, { L"__vwsn_value_" })
				CLASS_MEMBER_METHOD(SetSelectedCode, { L"__vwsn_value_" })
				CLASS_MEMBER_METHOD(UpdateCode, { L"code" })
				CLASS_MEMBER_EVENT(SearchChanged)
				CLASS_MEMBER_EVENT(SelectedCodeChanged)
				CLASS_MEMBER_PROPERTY_READONLY(Codes, GetCodes)
				CLASS_MEMBER_PROPERTY_EVENT(Search, GetSearch, SetSearch, SearchChanged)
				CLASS_MEMBER_PROPERTY_EVENT(SelectedCode, GetSelectedCode, SetSelectedCode, SelectedCodeChanged)
			END_INTERFACE_MEMBER(::gacpass::ICodeBookViewModel)

			BEGIN_INTERFACE_MEMBER(::gacpass::IEditCodeViewModel)
				CLASS_MEMBER_BASE(::vl::reflection::IDescriptable)
				CLASS_MEMBER_METHOD(GetCode, NO_PARAMETER)
				CLASS_MEMBER_METHOD(GetCodeLength, NO_PARAMETER)
				CLASS_MEMBER_METHOD(GetSpecialCharLength, NO_PARAMETER)
				CLASS_MEMBER_METHOD(SetCodeLength, { L"__vwsn_value_" })
				CLASS_MEMBER_METHOD(SetSpecialCharLength, { L"__vwsn_value_" })
				CLASS_MEMBER_EVENT(CodeChanged)
				CLASS_MEMBER_EVENT(CodeLengthChanged)
				CLASS_MEMBER_EVENT(SpecialCharLengthChanged)
				CLASS_MEMBER_PROPERTY_EVENT_READONLY(Code, GetCode, CodeChanged)
				CLASS_MEMBER_PROPERTY_EVENT(CodeLength, GetCodeLength, SetCodeLength, CodeLengthChanged)
				CLASS_MEMBER_PROPERTY_EVENT(SpecialCharLength, GetSpecialCharLength, SetSpecialCharLength, SpecialCharLengthChanged)
			END_INTERFACE_MEMBER(::gacpass::IEditCodeViewModel)

			BEGIN_INTERFACE_MEMBER(::gacpass::IKey)
				CLASS_MEMBER_BASE(::vl::reflection::IDescriptable)
				CLASS_MEMBER_METHOD(GetId, NO_PARAMETER)
				CLASS_MEMBER_METHOD(GetKey, NO_PARAMETER)
				CLASS_MEMBER_METHOD(SetId, { L"__vwsn_value_" })
				CLASS_MEMBER_METHOD(SetKey, { L"__vwsn_value_" })
				CLASS_MEMBER_PROPERTY(Id, GetId, SetId)
				CLASS_MEMBER_PROPERTY(Key, GetKey, SetKey)
			END_INTERFACE_MEMBER(::gacpass::IKey)

			BEGIN_INTERFACE_MEMBER(::gacpass::ILoginViewModel)
				CLASS_MEMBER_BASE(::vl::reflection::IDescriptable)
				CLASS_MEMBER_METHOD(GetLoggedIn, NO_PARAMETER)
				CLASS_MEMBER_METHOD(GetPassword, NO_PARAMETER)
				CLASS_MEMBER_METHOD(SetPassword, { L"__vwsn_value_" })
				CLASS_MEMBER_EVENT(LoggedInChanged)
				CLASS_MEMBER_EVENT(PasswordChanged)
				CLASS_MEMBER_PROPERTY_EVENT_READONLY(LoggedIn, GetLoggedIn, LoggedInChanged)
				CLASS_MEMBER_PROPERTY_EVENT(Password, GetPassword, SetPassword, PasswordChanged)
			END_INTERFACE_MEMBER(::gacpass::ILoginViewModel)

			BEGIN_INTERFACE_MEMBER(::gacpass::IRegisterViewModel)
				CLASS_MEMBER_BASE(::vl::reflection::IDescriptable)
				CLASS_MEMBER_METHOD(GetConfirmPassword, NO_PARAMETER)
				CLASS_MEMBER_METHOD(GetConfirmPasswordError, NO_PARAMETER)
				CLASS_MEMBER_METHOD(GetMainPasswordSet, NO_PARAMETER)
				CLASS_MEMBER_METHOD(GetPassword, NO_PARAMETER)
				CLASS_MEMBER_METHOD(GetPasswordError, NO_PARAMETER)
				CLASS_MEMBER_METHOD(Register, NO_PARAMETER)
				CLASS_MEMBER_METHOD(SetConfirmPassword, { L"__vwsn_value_" })
				CLASS_MEMBER_METHOD(SetPassword, { L"__vwsn_value_" })
				CLASS_MEMBER_EVENT(ConfirmPasswordChanged)
				CLASS_MEMBER_EVENT(ConfirmPasswordErrorChanged)
				CLASS_MEMBER_EVENT(MainPasswordSetChanged)
				CLASS_MEMBER_EVENT(PasswordChanged)
				CLASS_MEMBER_EVENT(PasswordErrorChanged)
				CLASS_MEMBER_PROPERTY_EVENT(ConfirmPassword, GetConfirmPassword, SetConfirmPassword, ConfirmPasswordChanged)
				CLASS_MEMBER_PROPERTY_EVENT_READONLY(ConfirmPasswordError, GetConfirmPasswordError, ConfirmPasswordErrorChanged)
				CLASS_MEMBER_PROPERTY_EVENT_READONLY(MainPasswordSet, GetMainPasswordSet, MainPasswordSetChanged)
				CLASS_MEMBER_PROPERTY_EVENT(Password, GetPassword, SetPassword, PasswordChanged)
				CLASS_MEMBER_PROPERTY_EVENT_READONLY(PasswordError, GetPasswordError, PasswordErrorChanged)
			END_INTERFACE_MEMBER(::gacpass::IRegisterViewModel)

			BEGIN_INTERFACE_MEMBER(::gacpass::IViewModel)
				CLASS_MEMBER_BASE(::vl::reflection::IDescriptable)
				CLASS_MEMBER_METHOD(GetCodeBookViewModel, NO_PARAMETER)
				CLASS_MEMBER_METHOD(GetLoginViewModel, NO_PARAMETER)
				CLASS_MEMBER_METHOD(GetRegisterViewModel, NO_PARAMETER)
				CLASS_MEMBER_PROPERTY_READONLY(CodeBookViewModel, GetCodeBookViewModel)
				CLASS_MEMBER_PROPERTY_READONLY(LoginViewModel, GetLoginViewModel)
				CLASS_MEMBER_PROPERTY_READONLY(RegisterViewModel, GetRegisterViewModel)
			END_INTERFACE_MEMBER(::gacpass::IViewModel)

			BEGIN_CLASS_MEMBER(::gacpass::LoginWindow)
				CLASS_MEMBER_BASE(::vl::presentation::controls::GuiCustomControl)
				CLASS_MEMBER_BASE(::gacpass::LoginWindowConstructor)
				CLASS_MEMBER_CONSTRUCTOR(::gacpass::LoginWindow*(::vl::Ptr<::gacpass::ILoginViewModel>), { L"__vwsn_ctor_parameter_ViewModel" })
				CLASS_MEMBER_METHOD(FlyoutAnimation, { L"container" })
				CLASS_MEMBER_METHOD(GetViewModel, NO_PARAMETER)
				CLASS_MEMBER_METHOD(OutAnimation, { L"container" })
				CLASS_MEMBER_FIELD(__vwsn_parameter_ViewModel)
				CLASS_MEMBER_PROPERTY_READONLY(ViewModel, GetViewModel)
			END_CLASS_MEMBER(::gacpass::LoginWindow)

			BEGIN_CLASS_MEMBER(::gacpass::LoginWindowConstructor)
				CLASS_MEMBER_BASE(::vl::reflection::DescriptableObject)
				CLASS_MEMBER_CONSTRUCTOR(::vl::Ptr<::gacpass::LoginWindowConstructor>(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(__vwsn_gacpass_LoginWindow_Initialize, { L"__vwsn_this_" })
				CLASS_MEMBER_FIELD(__vwsn_precompile_0)
				CLASS_MEMBER_FIELD(__vwsn_precompile_1)
				CLASS_MEMBER_FIELD(__vwsn_precompile_2)
				CLASS_MEMBER_FIELD(__vwsn_precompile_3)
				CLASS_MEMBER_FIELD(__vwsn_precompile_4)
				CLASS_MEMBER_FIELD(__vwsn_precompile_5)
				CLASS_MEMBER_FIELD(__vwsn_precompile_6)
				CLASS_MEMBER_FIELD(__vwsn_precompile_7)
				CLASS_MEMBER_FIELD(__vwsn_precompile_8)
				CLASS_MEMBER_FIELD(__vwsn_precompile_9)
				CLASS_MEMBER_FIELD(Container)
				CLASS_MEMBER_FIELD(ViewModel)
				CLASS_MEMBER_FIELD(buttonLogin)
				CLASS_MEMBER_FIELD(self)
				CLASS_MEMBER_FIELD(textBoxPassword)
			END_CLASS_MEMBER(::gacpass::LoginWindowConstructor)

			BEGIN_CLASS_MEMBER(::gacpass::MainWindow)
				CLASS_MEMBER_BASE(::vl::presentation::controls::GuiWindow)
				CLASS_MEMBER_BASE(::gacpass::MainWindowConstructor)
				CLASS_MEMBER_CONSTRUCTOR(::gacpass::MainWindow*(::vl::Ptr<::gacpass::IViewModel>), { L"__vwsn_ctor_parameter_ViewModel" })
				CLASS_MEMBER_METHOD(GetViewModel, NO_PARAMETER)
				CLASS_MEMBER_FIELD(__vwsn_parameter_ViewModel)
				CLASS_MEMBER_PROPERTY_READONLY(ViewModel, GetViewModel)
			END_CLASS_MEMBER(::gacpass::MainWindow)

			BEGIN_CLASS_MEMBER(::gacpass::MainWindowConstructor)
				CLASS_MEMBER_BASE(::vl::reflection::DescriptableObject)
				CLASS_MEMBER_CONSTRUCTOR(::vl::Ptr<::gacpass::MainWindowConstructor>(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(__vwsn_gacpass_MainWindow_Initialize, { L"__vwsn_this_" })
				CLASS_MEMBER_FIELD(__vwsn_precompile_0)
				CLASS_MEMBER_FIELD(__vwsn_precompile_1)
				CLASS_MEMBER_FIELD(__vwsn_precompile_2)
				CLASS_MEMBER_FIELD(ViewModel)
				CLASS_MEMBER_FIELD(self)
			END_CLASS_MEMBER(::gacpass::MainWindowConstructor)

			BEGIN_CLASS_MEMBER(::gacpass::RegisterWindow)
				CLASS_MEMBER_BASE(::vl::presentation::controls::GuiCustomControl)
				CLASS_MEMBER_BASE(::gacpass::RegisterWindowConstructor)
				CLASS_MEMBER_CONSTRUCTOR(::gacpass::RegisterWindow*(::vl::Ptr<::gacpass::IRegisterViewModel>), { L"__vwsn_ctor_parameter_ViewModel" })
				CLASS_MEMBER_METHOD(GetViewModel, NO_PARAMETER)
				CLASS_MEMBER_FIELD(__vwsn_parameter_ViewModel)
				CLASS_MEMBER_PROPERTY_READONLY(ViewModel, GetViewModel)
			END_CLASS_MEMBER(::gacpass::RegisterWindow)

			BEGIN_CLASS_MEMBER(::gacpass::RegisterWindowConstructor)
				CLASS_MEMBER_BASE(::vl::reflection::DescriptableObject)
				CLASS_MEMBER_CONSTRUCTOR(::vl::Ptr<::gacpass::RegisterWindowConstructor>(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(__vwsn_gacpass_RegisterWindow_Initialize, { L"__vwsn_this_" })
				CLASS_MEMBER_FIELD(__vwsn_precompile_0)
				CLASS_MEMBER_FIELD(__vwsn_precompile_1)
				CLASS_MEMBER_FIELD(__vwsn_precompile_10)
				CLASS_MEMBER_FIELD(__vwsn_precompile_11)
				CLASS_MEMBER_FIELD(__vwsn_precompile_12)
				CLASS_MEMBER_FIELD(__vwsn_precompile_13)
				CLASS_MEMBER_FIELD(__vwsn_precompile_14)
				CLASS_MEMBER_FIELD(__vwsn_precompile_15)
				CLASS_MEMBER_FIELD(__vwsn_precompile_16)
				CLASS_MEMBER_FIELD(__vwsn_precompile_2)
				CLASS_MEMBER_FIELD(__vwsn_precompile_3)
				CLASS_MEMBER_FIELD(__vwsn_precompile_4)
				CLASS_MEMBER_FIELD(__vwsn_precompile_5)
				CLASS_MEMBER_FIELD(__vwsn_precompile_6)
				CLASS_MEMBER_FIELD(__vwsn_precompile_7)
				CLASS_MEMBER_FIELD(__vwsn_precompile_8)
				CLASS_MEMBER_FIELD(__vwsn_precompile_9)
				CLASS_MEMBER_FIELD(ViewModel)
				CLASS_MEMBER_FIELD(buttonSignUp)
				CLASS_MEMBER_FIELD(self)
				CLASS_MEMBER_FIELD(textBoxConfirmPassword)
				CLASS_MEMBER_FIELD(textBoxPassword)
			END_CLASS_MEMBER(::gacpass::RegisterWindowConstructor)

#undef _
			class GacPassTypeLoader : public Object, public ITypeLoader
			{
			public:
				void Load(ITypeManager* manager)
				{
					ADD_TYPE_INFO(::gacpass::CodeBookWindow)
					ADD_TYPE_INFO(::gacpass::CodeBookWindowConstructor)
					ADD_TYPE_INFO(::gacpass::EditCodeWindow)
					ADD_TYPE_INFO(::gacpass::EditCodeWindowConstructor)
					ADD_TYPE_INFO(::gacpass::ICode)
					ADD_TYPE_INFO(::gacpass::ICodeBookViewModel)
					ADD_TYPE_INFO(::gacpass::IEditCodeViewModel)
					ADD_TYPE_INFO(::gacpass::IKey)
					ADD_TYPE_INFO(::gacpass::ILoginViewModel)
					ADD_TYPE_INFO(::gacpass::IRegisterViewModel)
					ADD_TYPE_INFO(::gacpass::IViewModel)
					ADD_TYPE_INFO(::gacpass::LoginWindow)
					ADD_TYPE_INFO(::gacpass::LoginWindowConstructor)
					ADD_TYPE_INFO(::gacpass::MainWindow)
					ADD_TYPE_INFO(::gacpass::MainWindowConstructor)
					ADD_TYPE_INFO(::gacpass::RegisterWindow)
					ADD_TYPE_INFO(::gacpass::RegisterWindowConstructor)
				}

				void Unload(ITypeManager* manager)
				{
				}
			};
#endif

			bool LoadGacPassTypes()
			{
#ifndef VCZH_DEBUG_NO_REFLECTION
				if (auto manager = GetGlobalTypeManager())
				{
					return manager->AddTypeLoader(MakePtr<GacPassTypeLoader>());
				}
#endif
				return false;
			}
		}
	}
}

#if defined( _MSC_VER)
#pragma warning(pop)
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#elif defined(__clang__)
#pragma clang diagnostic pop
#endif
