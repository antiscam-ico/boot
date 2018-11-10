//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: WebToolsBase.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef _CODELITE_WEBTOOLS_WEBTOOLSBASE_BASE_CLASSES_H
#define _CODELITE_WEBTOOLS_WEBTOOLSBASE_BASE_CLASSES_H

#include "Notebook.h"
#include "clThemedListCtrl.h"
#include "clThemedTreeCtrl.h"
#include "clToolBar.h"
#include <map>
#include <wx/artprov.h>
#include <wx/bitmap.h>
#include <wx/button.h>
#include <wx/checkbox.h>
#include <wx/dataview.h>
#include <wx/dialog.h>
#include <wx/filepicker.h>
#include <wx/icon.h>
#include <wx/iconbndl.h>
#include <wx/imaglist.h>
#include <wx/notebook.h>
#include <wx/panel.h>
#include <wx/propgrid/manager.h>
#include <wx/propgrid/advprops.h>
#include <wx/propgrid/property.h>
#include <wx/settings.h>
#include <wx/sizer.h>
#include <wx/splitter.h>
#include <wx/stattext.h>
#include <wx/stc/stc.h>
#include <wx/textctrl.h>
#include <wx/toolbar.h>
#include <wx/treectrl.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/xrc/xmlres.h>
#if wxVERSION_NUMBER >= 2900
#include <wx/persist.h>
#include <wx/persist/bookctrl.h>
#include <wx/persist/toplevel.h>
#include <wx/persist/treebook.h>
#endif

#ifdef WXC_FROM_DIP
#undef WXC_FROM_DIP
#endif
#if wxVERSION_NUMBER >= 3100
#define WXC_FROM_DIP(x) wxWindow::FromDIP(x, NULL)
#else
#define WXC_FROM_DIP(x) x
#endif

class WebToolsSettingsBase : public wxDialog
{
protected:
    wxNotebook* m_notebook10;
    wxPanel* m_panel56;
    wxCheckBox* m_checkBoxEnableJsCC;
    wxCheckBox* m_checkBoxEnableXmlCC;
    wxCheckBox* m_checkBoxEnableHtmlCC;
    wxPanel* m_panel12;
    wxPropertyGridManager* m_pgMgr;
    wxPGProperty* m_pgProp26;
    wxPGProperty* m_pgPropLogging;
    wxPGProperty* m_pgProp32;
    wxPGProperty* m_pgPropEcma5;
    wxPGProperty* m_pgPropEcma6;
    wxPGProperty* m_pgPropJQuery;
    wxPGProperty* m_pgPropUnderscore;
    wxPGProperty* m_pgPropBrowser;
    wxPGProperty* m_pgPropChai;
    wxPGProperty* m_pgPropQML;
    wxPGProperty* m_pgProp46;
    wxPGProperty* m_pgPropAngular;
    wxPGProperty* m_pgPropStrings;
    wxPGProperty* m_pgPropNode;
    wxPGProperty* m_pgPropNodeExpress;
    wxPGProperty* m_pgPropWebPack;
    wxPGProperty* m_pgPropRequireJS;
    wxPanel* m_panel237;
    wxStaticText* m_staticText243;
    wxFilePickerCtrl* m_filePickerNodeJS;
    wxStaticText* m_staticText247;
    wxFilePickerCtrl* m_filePickerNpm;
    wxButton* m_buttonSuugest;
    wxStdDialogButtonSizer* m_stdBtnSizer4;
    wxButton* m_buttonCancel;
    wxButton* m_buttonOK;
    wxButton* m_buttonApply;

protected:
    virtual void OnModified(wxCommandEvent& event) { event.Skip(); }
    virtual void OnJSValueChanged(wxPropertyGridEvent& event) { event.Skip(); }
    virtual void OnNodejsPath(wxFileDirPickerEvent& event) { event.Skip(); }
    virtual void OnNpmPath(wxFileDirPickerEvent& event) { event.Skip(); }
    virtual void OnSuggestNodeJSPaths(wxCommandEvent& event) { event.Skip(); }
    virtual void OnOKUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnOK(wxCommandEvent& event) { event.Skip(); }
    virtual void OnApply(wxCommandEvent& event) { event.Skip(); }

public:
    wxCheckBox* GetCheckBoxEnableJsCC() { return m_checkBoxEnableJsCC; }
    wxCheckBox* GetCheckBoxEnableXmlCC() { return m_checkBoxEnableXmlCC; }
    wxCheckBox* GetCheckBoxEnableHtmlCC() { return m_checkBoxEnableHtmlCC; }
    wxPanel* GetPanel56() { return m_panel56; }
    wxPropertyGridManager* GetPgMgr() { return m_pgMgr; }
    wxPanel* GetPanel12() { return m_panel12; }
    wxStaticText* GetStaticText243() { return m_staticText243; }
    wxFilePickerCtrl* GetFilePickerNodeJS() { return m_filePickerNodeJS; }
    wxStaticText* GetStaticText247() { return m_staticText247; }
    wxFilePickerCtrl* GetFilePickerNpm() { return m_filePickerNpm; }
    wxButton* GetButtonSuugest() { return m_buttonSuugest; }
    wxPanel* GetPanel237() { return m_panel237; }
    wxNotebook* GetNotebook10() { return m_notebook10; }
    WebToolsSettingsBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("WebTools Settings"),
                         const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(500, 300),
                         long style = wxDEFAULT_DIALOG_STYLE | wxRESIZE_BORDER);
    virtual ~WebToolsSettingsBase();
};

class NodeJSDebuggerDlgBase : public wxDialog
{
protected:
    wxStaticText* m_staticText78;
    wxFilePickerCtrl* m_filePickerNodeJS;
    wxStaticText* m_staticTextScript;
    wxFilePickerCtrl* m_filePickerScript;
    wxStaticText* m_staticText257;
    wxDirPickerCtrl* m_dirPickerWorkingDirectory;
    wxStaticText* m_staticTextDebuggerPort;
    wxTextCtrl* m_textCtrlPort;
    wxStaticText* m_staticText132;
    wxStyledTextCtrl* m_stcCommandLineArguments;
    wxStdDialogButtonSizer* m_stdBtnSizer70;
    wxButton* m_buttonOK;
    wxButton* m_button74;

protected:
    virtual void OnOKUI(wxUpdateUIEvent& event) { event.Skip(); }

public:
    wxStaticText* GetStaticText78() { return m_staticText78; }
    wxFilePickerCtrl* GetFilePickerNodeJS() { return m_filePickerNodeJS; }
    wxStaticText* GetStaticTextScript() { return m_staticTextScript; }
    wxFilePickerCtrl* GetFilePickerScript() { return m_filePickerScript; }
    wxStaticText* GetStaticText257() { return m_staticText257; }
    wxDirPickerCtrl* GetDirPickerWorkingDirectory() { return m_dirPickerWorkingDirectory; }
    wxStaticText* GetStaticTextDebuggerPort() { return m_staticTextDebuggerPort; }
    wxTextCtrl* GetTextCtrlPort() { return m_textCtrlPort; }
    wxStaticText* GetStaticText132() { return m_staticText132; }
    wxStyledTextCtrl* GetStcCommandLineArguments() { return m_stcCommandLineArguments; }
    NodeJSDebuggerDlgBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Node.js Debugger"),
                          const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1, -1),
                          long style = wxDEFAULT_DIALOG_STYLE | wxRESIZE_BORDER);
    virtual ~NodeJSDebuggerDlgBase();
};

class NodeJSNewWorkspaceDlgBase : public wxDialog
{
protected:
    wxStaticText* m_staticText160;
    wxTextCtrl* m_textCtrllName;
    wxStaticText* m_staticText150;
    wxDirPickerCtrl* m_dirPickerFolder;
    wxCheckBox* m_checkBoxNewFolder;
    wxStaticText* m_staticTextPreview;
    wxStdDialogButtonSizer* m_stdBtnSizer142;
    wxButton* m_button144;
    wxButton* m_button146;

protected:
    virtual void OnTextUpdate(wxCommandEvent& event) { event.Skip(); }
    virtual void OnFolderSelected(wxFileDirPickerEvent& event) { event.Skip(); }
    virtual void OnCheckNewFolder(wxCommandEvent& event) { event.Skip(); }
    virtual void OnOKUI(wxUpdateUIEvent& event) { event.Skip(); }

public:
    wxStaticText* GetStaticText160() { return m_staticText160; }
    wxTextCtrl* GetTextCtrllName() { return m_textCtrllName; }
    wxStaticText* GetStaticText150() { return m_staticText150; }
    wxDirPickerCtrl* GetDirPickerFolder() { return m_dirPickerFolder; }
    wxCheckBox* GetCheckBoxNewFolder() { return m_checkBoxNewFolder; }
    wxStaticText* GetStaticTextPreview() { return m_staticTextPreview; }
    NodeJSNewWorkspaceDlgBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("New Workspace"),
                              const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1, -1),
                              long style = wxDEFAULT_DIALOG_STYLE | wxRESIZE_BORDER);
    virtual ~NodeJSNewWorkspaceDlgBase();
};

class WebToolsImages : public wxImageList
{
protected:
    // Maintain a map of all bitmaps representd by their name
    std::map<wxString, wxBitmap> m_bitmaps;
    // The requested image resolution (can be one of @2x, @1.5x, @1.25x or an empty string (the default)
    wxString m_resolution;
    int m_imagesWidth;
    int m_imagesHeight;

protected:
public:
    WebToolsImages();
    const wxBitmap& Bitmap(const wxString& name) const
    {
        if(!m_bitmaps.count(name + m_resolution)) return wxNullBitmap;
        return m_bitmaps.find(name + m_resolution)->second;
    }

    void SetBitmapResolution(const wxString& res = wxEmptyString) { m_resolution = res; }

    virtual ~WebToolsImages();
};

class NodeJSCliDebuggerPaneBase : public wxPanel
{
protected:
    wxSplitterWindow* m_splitter271;
    wxPanel* m_splitterPageWatches;
    wxSplitterWindow* m_splitter311;
    wxPanel* m_panelConsole;
    wxPanel* m_panelOutput;
    wxPanel* m_splitterPageCallstack;
    wxSplitterWindow* m_splitter325;
    wxPanel* m_splitterPage329;
    Notebook* m_notebook341;
    wxPanel* m_panel343;
    clThemedTreeCtrl* m_treeCtrlLocals;
    wxPanel* m_splitterPage333;
    Notebook* m_notebook;
    wxPanel* m_panelCallstack;
    clThemedListCtrl* m_dvListCtrlCallstack;
    wxPanel* m_panelBreakpoints;
    clToolBar* m_tbBreakpoints;
    clThemedListCtrl* m_dvListCtrlBreakpoints;

protected:
    virtual void OnLocalExpanding(wxTreeEvent& event) { event.Skip(); }

public:
    wxPanel* GetPanelConsole() { return m_panelConsole; }
    wxPanel* GetPanelOutput() { return m_panelOutput; }
    wxSplitterWindow* GetSplitter311() { return m_splitter311; }
    wxPanel* GetSplitterPageWatches() { return m_splitterPageWatches; }
    clThemedTreeCtrl* GetTreeCtrlLocals() { return m_treeCtrlLocals; }
    wxPanel* GetPanel343() { return m_panel343; }
    Notebook* GetNotebook341() { return m_notebook341; }
    wxPanel* GetSplitterPage329() { return m_splitterPage329; }
    clThemedListCtrl* GetDvListCtrlCallstack() { return m_dvListCtrlCallstack; }
    wxPanel* GetPanelCallstack() { return m_panelCallstack; }
    clToolBar* GetTbBreakpoints() { return m_tbBreakpoints; }
    clThemedListCtrl* GetDvListCtrlBreakpoints() { return m_dvListCtrlBreakpoints; }
    wxPanel* GetPanelBreakpoints() { return m_panelBreakpoints; }
    Notebook* GetNotebook() { return m_notebook; }
    wxPanel* GetSplitterPage333() { return m_splitterPage333; }
    wxSplitterWindow* GetSplitter325() { return m_splitter325; }
    wxPanel* GetSplitterPageCallstack() { return m_splitterPageCallstack; }
    wxSplitterWindow* GetSplitter271() { return m_splitter271; }
    NodeJSCliDebuggerPaneBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition,
                              const wxSize& size = wxSize(500, 300), long style = wxTAB_TRAVERSAL);
    virtual ~NodeJSCliDebuggerPaneBase();
};

#endif
