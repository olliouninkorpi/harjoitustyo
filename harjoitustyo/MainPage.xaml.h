//
// MainPage.xaml.h
// Declaration of the MainPage class.
//

#pragma once

#include "MainPage.g.h"

namespace harjoitustyo
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	public ref class MainPage sealed
	{
	public:
		MainPage();

	private:
		void button1_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void lahetaPainike_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void comboBox_SelectionChanged(Platform::Object^ sender, Windows::UI::Xaml::Controls::SelectionChangedEventArgs^ e);
		void textBox_TextChanged(Platform::Object^ sender, Windows::UI::Xaml::Controls::TextChangedEventArgs^ e);
	};
}
