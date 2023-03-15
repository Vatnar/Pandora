// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220531.1

#pragma once
#ifndef WINRT_Windows_UI_Xaml_Automation_Text_0_H
#define WINRT_Windows_UI_Xaml_Automation_Text_0_H
WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Automation::Text
{
    enum class TextPatternRangeEndpoint : int32_t
    {
        Start = 0,
        End = 1,
    };
    enum class TextUnit : int32_t
    {
        Character = 0,
        Format = 1,
        Word = 2,
        Line = 3,
        Paragraph = 4,
        Page = 5,
        Document = 6,
    };
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::UI::Xaml::Automation::Text::TextPatternRangeEndpoint>{ using type = enum_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Automation::Text::TextUnit>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Automation::Text::TextPatternRangeEndpoint> = L"Windows.UI.Xaml.Automation.Text.TextPatternRangeEndpoint";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Automation::Text::TextUnit> = L"Windows.UI.Xaml.Automation.Text.TextUnit";
}
#endif
