///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct  8 2012)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __WEATHERROUTINGUI_H__
#define __WEATHERROUTINGUI_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/intl.h>
#include <wx/listctrl.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/sizer.h>
#include <wx/statbox.h>
#include <wx/panel.h>
#include <wx/gauge.h>
#include <wx/splitter.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/frame.h>
#include <wx/combobox.h>
#include <wx/stattext.h>
#include <wx/datectrl.h>
#include <wx/dateevt.h>
#include <wx/button.h>
#include <wx/textctrl.h>
#include <wx/spinctrl.h>
#include <wx/filepicker.h>
#include <wx/checkbox.h>
#include <wx/listbox.h>
#include <wx/dialog.h>
#include <wx/clrpicker.h>
#include <wx/scrolwin.h>
#include <wx/choice.h>
#include <wx/radiobut.h>
#include <wx/slider.h>
#include <wx/notebook.h>
#include <wx/html/htmlwin.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class WeatherRoutingBase
///////////////////////////////////////////////////////////////////////////////
class WeatherRoutingBase : public wxFrame 
{
	private:
	
	protected:
		wxSplitterWindow* m_splitter1;
		wxPanel* m_panel11;
		wxListCtrl* m_lPositions;
		wxPanel* m_panel12;
		wxListCtrl* m_lWeatherRoutes;
		wxMenuBar* m_menubar3;
		wxMenu* m_mFile;
		wxMenu* m_mPosition;
		wxMenu* m_mConfiguration;
		wxMenuItem* m_mBatch;
		wxMenuItem* m_mEdit;
		wxMenuItem* m_mGoTo;
		wxMenuItem* m_mDelete;
		wxMenuItem* m_mCompute;
		wxMenuItem* m_mComputeAll;
		wxMenuItem* m_mExport;
		wxMenuItem* m_mExportAll;
		wxMenu* m_mView;
		wxMenu* m_mHelp;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnEditConfigurationClick( wxMouseEvent& event ) { event.Skip(); }
		virtual void OnWeatherRoutesListLeftDown( wxMouseEvent& event ) { event.Skip(); }
		virtual void OnWeatherRouteSort( wxListEvent& event ) { event.Skip(); }
		virtual void OnWeatherRouteSelected( wxListEvent& event ) { event.Skip(); }
		virtual void OnOpen( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnSave( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClose( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnNewPosition( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnUpdateBoat( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnRemovePosition( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClearPositions( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnNew( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnBatch( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnEditConfiguration( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnGoTo( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnDelete( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnDeleteAll( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnCompute( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnComputeAll( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnResetAll( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnExport( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnExportAll( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnFilter( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnSettings( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnStatistics( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnReport( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnPlot( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnInformation( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnAbout( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		wxGauge* m_gProgress;
		wxMenuItem* m_mDeleteAll;
		
		WeatherRoutingBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Weather Routing"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 600,-1 ), long style = wxCAPTION|wxCLOSE_BOX|wxFRAME_FLOAT_ON_PARENT|wxFRAME_NO_TASKBAR|wxRESIZE_BORDER|wxTAB_TRAVERSAL );
		
		~WeatherRoutingBase();
		
		void m_splitter1OnIdle( wxIdleEvent& )
		{
			m_splitter1->SetSashPosition( 120 );
			m_splitter1->Disconnect( wxEVT_IDLE, wxIdleEventHandler( WeatherRoutingBase::m_splitter1OnIdle ), NULL, this );
		}
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class ConfigurationDialogBase
///////////////////////////////////////////////////////////////////////////////
class ConfigurationDialogBase : public wxDialog 
{
	private:
	
	protected:
		wxComboBox* m_cStart;
		wxStaticText* m_staticText28;
		wxButton* m_bGribTime;
		wxStaticText* m_staticText30;
		wxTextCtrl* m_tStartHour;
		wxButton* m_bCurrentTime;
		wxComboBox* m_cEnd;
		wxSpinCtrl* m_sTimeStepHours;
		wxStaticText* m_staticText110;
		wxSpinCtrl* m_sTimeStepMinutes;
		wxStaticText* m_staticText111;
		wxSpinCtrl* m_sTimeStepSeconds;
		wxStaticText* m_staticText112;
		wxFilePickerCtrl* m_fpBoat;
		wxButton* m_bEditBoat;
		wxCheckBox* m_cbAllowDataDeficient;
		wxCheckBox* m_cbDetectLand;
		wxCheckBox* m_cbInvertedRegions;
		wxCheckBox* m_cbAnchoring;
		wxStaticText* m_staticText20;
		wxSpinCtrl* m_sMaxDivertedCourse;
		wxStaticText* m_staticText1181;
		wxStaticText* m_staticText23;
		wxSpinCtrl* m_sMaxWindKnots;
		wxStaticText* m_staticText128;
		wxStaticText* m_staticText27;
		wxSpinCtrl* m_sMaxSwellMeters;
		wxStaticText* m_staticText129;
		wxStaticText* m_staticText26;
		wxSpinCtrl* m_sMaxLatitude;
		wxStaticText* m_staticText131;
		wxStaticText* m_staticText1131;
		wxSpinCtrl* m_sMaxTacks;
		wxStaticText* m_staticText1141;
		wxStaticText* m_staticText24;
		wxSpinCtrl* m_sTackingTime;
		wxStaticText* m_staticText1191;
		wxListBox* m_lDegreeSteps;
		wxTextCtrl* m_tDegreeStep;
		wxButton* m_bAddDegreeStep;
		wxButton* m_bRemoveDegreeStep;
		wxButton* m_bClearDegreeSteps;
		wxStaticText* m_staticText113;
		wxTextCtrl* m_tFromDegrees;
		wxStaticText* m_staticText114;
		wxStaticText* m_staticText115;
		wxTextCtrl* m_tToDegrees;
		wxStaticText* m_staticText116;
		wxStaticText* m_staticText117;
		wxTextCtrl* m_tByDegrees;
		wxStaticText* m_staticText118;
		wxButton* m_bGenerateDegreeSteps;
		wxButton* m_bClose;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnUpdate( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnUpdateDate( wxDateEvent& event ) { event.Skip(); }
		virtual void OnGribTime( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnCurrentTime( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnUpdateSpin( wxSpinEvent& event ) { event.Skip(); }
		virtual void OnUpdateFile( wxFileDirPickerEvent& event ) { event.Skip(); }
		virtual void OnEditBoat( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnAddDegreeStep( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnRemoveDegreeStep( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClearDegreeSteps( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnGenerateDegreeSteps( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClose( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		wxDatePickerCtrl* m_dpStartDate;
		wxCheckBox* m_cbUseGrib;
		wxCheckBox* m_cbUseClimatology;
		wxCheckBox* m_cbCurrents;
		
		ConfigurationDialogBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Weather Routing Configuration"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE ); 
		~ConfigurationDialogBase();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class SettingsDialogBase
///////////////////////////////////////////////////////////////////////////////
class SettingsDialogBase : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText74;
		wxStaticText* m_staticText73;
		wxStaticText* m_staticText75;
		wxStaticText* m_staticText70;
		wxStaticText* m_staticText71;
		wxStaticText* m_staticText115;
		wxStdDialogButtonSizer* m_sdbSizer1;
		wxButton* m_sdbSizer1OK;
		wxButton* m_sdbSizer1Help;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnUpdateColor( wxColourPickerEvent& event ) { event.Skip(); }
		virtual void OnUpdateSpin( wxSpinEvent& event ) { event.Skip(); }
		virtual void OnUpdate( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnHelp( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		wxColourPickerCtrl* m_cpCursorRoute;
		wxColourPickerCtrl* m_cpDestinationRoute;
		wxSpinCtrl* m_sRouteThickness;
		wxSpinCtrl* m_sIsoChronThickness;
		wxSpinCtrl* m_sAlternateRouteThickness;
		wxCheckBox* m_cbAlternatesForAll;
		wxCheckBox* m_cbSquaresAtSailChanges;
		wxSpinCtrl* m_sConcurrentThreads;
		
		SettingsDialogBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Weather Routing Settings"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxCAPTION ); 
		~SettingsDialogBase();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class BoatDialogBase
///////////////////////////////////////////////////////////////////////////////
class BoatDialogBase : public wxDialog 
{
	private:
	
	protected:
		wxListCtrl* m_lBoatPlans;
		wxButton* m_bNewBoatPlan;
		wxButton* m_bDeleteBoatPlan;
		wxScrolledWindow* m_PlotWindow;
		wxNotebook* m_notebook1;
		wxPanel* m_panel3;
		wxChoice* m_cPlotType;
		wxChoice* m_cPlotAxis;
		wxSpinCtrl* m_sWindSpeed;
		wxStaticText* m_stTrueWindAngle;
		wxStaticText* m_staticText21;
		wxStaticText* m_stTrueWindKnots;
		wxStaticText* m_staticText23;
		wxStaticText* m_stApparentWindAngle;
		wxStaticText* m_staticText211;
		wxStaticText* m_stApparentWindKnots;
		wxStaticText* m_staticText231;
		wxStaticText* m_stBoatAngle;
		wxStaticText* m_staticText212;
		wxStaticText* m_stBoatKnots;
		wxStaticText* m_staticText232;
		wxPanel* m_pPolarConfig;
		wxRadioButton* m_rbComputed;
		wxRadioButton* m_rbCSV;
		wxStaticBoxSizer* m_sbComputation;
		wxStaticText* m_staticText961;
		wxSlider* m_sEta;
		wxStaticText* m_staticText35;
		wxSpinCtrl* m_sFrictionalDrag;
		wxStaticText* m_staticText112;
		wxSpinCtrl* m_sWakeDrag;
		wxButton* m_bRecomputeDrag;
		wxButton* m_bDragInfo;
		wxStaticText* m_staticText91;
		wxSpinCtrl* m_sLuffAngle;
		wxCheckBox* m_cbWingWingRunning;
		wxStaticText* m_staticText100;
		wxChoice* m_cHullType;
		wxStaticText* m_staticText58;
		wxSpinCtrl* m_sDisplacement;
		wxStaticText* m_staticText57;
		wxSpinCtrl* m_sLWL;
		wxButton* m_bSaveCSV;
		wxStaticBoxSizer* m_sbCSV;
		wxStaticText* m_staticText93;
		wxFilePickerCtrl* m_fpCSVPath;
		wxStaticText* m_staticText123;
		wxStaticText* m_stWindSpeedStep;
		wxStaticText* m_staticText125;
		wxStaticText* m_stWindDegreeStep;
		wxPanel* m_panel311;
		wxStaticText* m_staticText3511;
		wxStaticText* m_stBestCourseUpWindPortTack;
		wxStaticText* m_staticText35111;
		wxStaticText* m_stBestCourseUpWindStarboardTack;
		wxStaticText* m_staticText35112;
		wxStaticText* m_stBestCourseDownWindPortTack;
		wxStaticText* m_staticText35113;
		wxStaticText* m_stBestCourseDownWindStarboardTack;
		wxButton* m_bOptimizeTacking;
		wxButton* m_bResetOptimizeTacking;
		wxPanel* m_panel10;
		wxListBox* m_lSwitchPlans;
		wxButton* m_bNewSwitchPlanRule;
		wxButton* m_bEditSwitchBoatPlan;
		wxButton* m_bDeleteSwitchBoatPlan;
		wxPanel* m_panel5;
		wxStaticText* m_staticText113;
		wxSpinCtrl* m_sBeam;
		wxStaticText* m_staticText109;
		wxSpinCtrl* m_sLOA;
		wxStaticText* m_staticText92;
		wxStaticText* m_stHullSpeed;
		wxStaticText* m_staticText94;
		wxStaticText* m_stCapsizeRisk;
		wxStaticText* m_staticText96;
		wxStaticText* m_stComfortFactor;
		wxStaticText* m_staticText105;
		wxStaticText* m_stDisplacementLengthRatio;
		wxButton* m_bOpen;
		wxButton* m_bSaveAs;
		wxButton* m_bSaveandClose;
		wxButton* m_bClose;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnSailPlanSelected( wxListEvent& event ) { event.Skip(); }
		virtual void OnNewBoatPlan( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnDeleteBoatPlan( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnMouseEventsPlot( wxMouseEvent& event ) { event.Skip(); }
		virtual void OnPaintPlot( wxPaintEvent& event ) { event.Skip(); }
		virtual void OnSizePlot( wxSizeEvent& event ) { event.Skip(); }
		virtual void OnUpdatePlot( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnUpdateWindSpeed( wxSpinEvent& event ) { event.Skip(); }
		virtual void OnPolarMode( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnEta( wxScrollEvent& event ) { event.Skip(); }
		virtual void OnRecomputeSpin( wxSpinEvent& event ) { event.Skip(); }
		virtual void OnRecomputeDrag( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnDragInfo( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnRecompute( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnUpdateStatistics( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnUpdateStatisticsSpin( wxSpinEvent& event ) { event.Skip(); }
		virtual void OnSaveCSV( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnPolarCSVFile( wxFileDirPickerEvent& event ) { event.Skip(); }
		virtual void OnOptimizeTacking( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnResetOptimalTackingSpeed( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnNewSwitchPlanRule( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnEditSwitchPlanRule( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnDeleteSwitchPlanRule( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnOpen( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnSaveAs( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnSave( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClose( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		BoatDialogBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Boat"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER ); 
		~BoatDialogBase();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class SwitchPlanDialogBase
///////////////////////////////////////////////////////////////////////////////
class SwitchPlanDialogBase : public wxDialog 
{
	private:
	
	protected:
		wxCheckBox* m_cbMaxWindSpeed;
		wxSpinCtrl* m_sMaxWindSpeed;
		wxStaticText* m_staticText101;
		wxCheckBox* m_cbMinWindSpeed;
		wxSpinCtrl* m_sMinWindSpeed;
		wxStaticText* m_staticText102;
		wxCheckBox* m_cbMaxWindDirection;
		wxSpinCtrl* m_sMaxWindDirection;
		wxStaticText* m_staticText103;
		wxCheckBox* m_cbMinWindDirection;
		wxSpinCtrl* m_sMinWindDirection;
		wxStaticText* m_staticText104;
		wxCheckBox* m_cbMaxWaveHeight;
		wxSpinCtrl* m_sMaxWaveHeight;
		wxStaticText* m_staticText105;
		wxCheckBox* m_cbMinWaveHeight;
		wxSpinCtrl* m_sMinWaveHeight;
		wxStaticText* m_staticText106;
		wxCheckBox* m_cbDayTime;
		wxCheckBox* m_cbNightTime;
		wxStaticText* m_staticText107;
		wxChoice* m_cPlans;
		wxButton* m_bInformation;
		wxButton* m_bCancel;
		wxButton* m_bDone;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnInformation( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnCancel( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnDone( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		SwitchPlanDialogBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Switch Sail Plan Configuration"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxCAPTION ); 
		~SwitchPlanDialogBase();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class PlotDialogBase
///////////////////////////////////////////////////////////////////////////////
class PlotDialogBase : public wxDialog 
{
	private:
	
	protected:
		wxScrolledWindow* m_PlotWindow;
		wxStaticText* m_staticText138;
		wxSlider* m_sPosition;
		wxStaticText* m_staticText139;
		wxSlider* m_sScale;
		wxStaticText* m_staticText140;
		wxChoice* m_cVariable1;
		wxStaticText* m_stMousePosition1;
		wxStaticText* m_staticText1401;
		wxChoice* m_cVariable2;
		wxStaticText* m_stMousePosition2;
		wxStaticText* m_staticText14011;
		wxChoice* m_cVariable3;
		wxStaticText* m_stMousePosition3;
		wxStdDialogButtonSizer* m_sdbSizer4;
		wxButton* m_sdbSizer4OK;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnMouseEventsPlot( wxMouseEvent& event ) { event.Skip(); }
		virtual void OnPaintPlot( wxPaintEvent& event ) { event.Skip(); }
		virtual void OnSizePlot( wxSizeEvent& event ) { event.Skip(); }
		virtual void OnUpdatePlot( wxScrollEvent& event ) { event.Skip(); }
		virtual void OnUpdatePlotVariable( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		PlotDialogBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Weather Route Plot"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 800,480 ), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER ); 
		~PlotDialogBase();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class InformationDialog
///////////////////////////////////////////////////////////////////////////////
class InformationDialog : public wxDialog 
{
	private:
	
	protected:
		wxStdDialogButtonSizer* m_sdbSizer2;
		wxButton* m_sdbSizer2OK;
	
	public:
		wxHtmlWindow* m_htmlInformation;
		
		InformationDialog( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Weather Routing Information"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 600,400 ), long style = wxDEFAULT_DIALOG_STYLE ); 
		~InformationDialog();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class AboutDialogBase
///////////////////////////////////////////////////////////////////////////////
class AboutDialogBase : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText110;
		wxButton* m_bAboutAuthor;
		wxButton* m_bClose;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnAboutAuthor( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClose( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		AboutDialogBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("About Weather Routing"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE ); 
		~AboutDialogBase();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class StatisticsDialogBase
///////////////////////////////////////////////////////////////////////////////
class StatisticsDialogBase : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText511;
		wxStaticText* m_stRunTime;
		wxStaticText* m_staticText116;
		wxStaticText* m_staticText125;
		wxStaticText* m_staticText121;
		wxStaticText* m_staticText123;
		wxStaticText* m_staticText47;
		wxStaticText* m_stState;
		wxStaticText* m_staticText53;
		wxStaticText* m_stIsoChrons;
		wxStaticText* m_staticText55;
		wxStaticText* m_stRoutes;
		wxStaticText* m_staticText57;
		wxStaticText* m_stInvRoutes;
		wxStaticText* m_staticText90;
		wxStaticText* m_stSkipPositions;
		wxStaticText* m_staticText49;
		wxStaticText* m_stPositions;
		wxStdDialogButtonSizer* m_sdbSizer5;
		wxButton* m_sdbSizer5OK;
	
	public:
		wxStaticText* m_stPercentageUpwind;
		wxStaticText* m_stPortStarboard;
		wxStaticText* m_stAverageWindKnots;
		wxStaticText* m_stAverageWaveHeight;
		
		StatisticsDialogBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Weather Routing Statistics"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE ); 
		~StatisticsDialogBase();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class ReportDialogBase
///////////////////////////////////////////////////////////////////////////////
class ReportDialogBase : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText120;
		wxStaticText* m_stStart;
		wxStaticText* m_staticText122;
		wxStaticText* m_stEnd;
		wxCheckBox* m_cbAllRoutes;
		wxTextCtrl* m_tRouteReport;
		wxTextCtrl* m_tConfigurationReport;
		wxButton* m_bInformation;
		wxButton* m_bClose;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnReportAllRoutes( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnInformation( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClose( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		ReportDialogBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Weather Route Report"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE ); 
		~ReportDialogBase();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class FilterRoutesDialogBase
///////////////////////////////////////////////////////////////////////////////
class FilterRoutesDialogBase : public wxDialog 
{
	private:
	
	protected:
		wxChoice* m_cCategory;
		wxTextCtrl* m_tFilter;
		wxButton* m_button48;
		wxButton* m_bDone;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnCategory( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnFilterText( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnResetAll( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnDone( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		FilterRoutesDialogBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Filter Routes"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE ); 
		~FilterRoutesDialogBase();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class ConfigurationBatchDialogBase
///////////////////////////////////////////////////////////////////////////////
class ConfigurationBatchDialogBase : public wxDialog 
{
	private:
	
	protected:
		wxNotebook* m_notebookConfigurations;
		wxPanel* m_panel8;
		wxStaticText* m_staticText108;
		wxStaticText* m_stStartDateTime;
		wxStaticText* m_staticText121;
		wxStaticText* m_staticText122;
		wxStaticText* m_staticText123;
		wxStaticText* m_staticText124;
		wxStaticText* m_staticText125;
		wxStaticText* m_staticText126;
		wxPanel* m_pRoutes;
		wxListBox* m_lSources;
		wxListBox* m_lDestinations;
		wxStaticText* m_staticText1241;
		wxTextCtrl* m_tMiles;
		wxStaticText* m_staticText1251;
		wxButton* m_bConnect;
		wxButton* m_bDisconnectAll;
		wxPanel* m_panel9;
		wxButton* m_bAddBoat;
		wxButton* m_bRemoveBoat;
		wxButton* m_bInformation;
		wxButton* m_bReset;
		wxButton* m_bGenerate;
		wxButton* m_bClose;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnSources( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnDestinations( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnConnect( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnDisconnectAll( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnAddBoat( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnRemoveBoat( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnInformation( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnReset( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnGenerate( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClose( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		wxTextCtrl* m_tStartDays;
		wxTextCtrl* m_tStartHours;
		wxTextCtrl* m_tStartSpacingDays;
		wxTextCtrl* m_tStartSpacingHours;
		wxListBox* m_lBoats;
		
		ConfigurationBatchDialogBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Weather Routing Configuration Batch"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE ); 
		~ConfigurationBatchDialogBase();
	
};

#endif //__WEATHERROUTINGUI_H__
