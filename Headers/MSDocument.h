//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDocument.h"

#import "BCSideBarViewControllerDelegate.h"
#import "MSBasicDelegate.h"
#import "MSDocumentDataDelegate.h"
#import "MSEventHandlerManagerDelegate.h"
#import "MSSidebarControllerDelegate.h"
#import "NSMenuDelegate.h"
#import "NSToolbarDelegate.h"
#import "NSWindowDelegate.h"

@class BCSideBarViewController, MSActionController, MSBackButtonWindowController, MSCacheManager, MSContentDrawViewController, MSDocumentData, MSEventHandlerManager, MSFontList, MSHistoryMaker, MSImmutableDocumentData, MSInspectorController, MSLayerArray, MSMainSplitViewController, MSToolbarConstructor, NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, NSString, NSTimer, NSView, NSWindow;

@interface MSDocument : NSDocument <MSSidebarControllerDelegate, MSEventHandlerManagerDelegate, BCSideBarViewControllerDelegate, NSMenuDelegate, NSToolbarDelegate, NSWindowDelegate, MSBasicDelegate, MSDocumentDataDelegate>
{
    BOOL _hasOpenedImageFile;
    BOOL _nextReadFromURLIsReload;
    BOOL _layerListRefreshIsScheduled;
    BOOL _temporarilyDisableSelectionHiding;
    BOOL _cacheFlushInProgress;
    BOOL _hasScheduledDocumentDidChange;
    NSArray *_exportableLayerSelection;
    NSWindow *_documentWindow;
    NSView *_messageView;
    MSMainSplitViewController *_splitViewController;
    NSView *_inspectorPlaceholderView;
    NSView *_canvasPlaceholderView;
    MSToolbarConstructor *_toolbarConstructor;
    MSActionController *_actionsController;
    MSDocumentData *_documentData;
    MSEventHandlerManager *_eventHandlerManager;
    MSCacheManager *_cacheManager;
    MSHistoryMaker *_historyMaker;
    MSInspectorController *_inspectorController;
    MSFontList *_fontList;
    BCSideBarViewController *_sidebarController;
    MSLayerArray *_selectedLayersA;
    MSContentDrawViewController *_currentContentViewController;
    MSImmutableDocumentData *_documentDataUsedForLayerList;
    NSMutableSet *_layersWithHiddenSelectionHandles;
    NSTimer *_resetHiddenSelectionHandlesTimer;
    double _mostRecentCacheFlushingTime;
    NSMutableDictionary *_mutableUIMetadata;
    MSBackButtonWindowController *_backButtonController;
    NSMutableDictionary *_originalViewportsForEditedSymbols;
}

+ (id)currentDocument;
+ (id)windowForSheet;
+ (BOOL)isNativeType:(id)arg1;
+ (id)writableTypes;
+ (id)readableTypes;
+ (BOOL)autosavesInPlace;
@property(nonatomic) BOOL hasScheduledDocumentDidChange; // @synthesize hasScheduledDocumentDidChange=_hasScheduledDocumentDidChange;
@property(retain, nonatomic) NSMutableDictionary *originalViewportsForEditedSymbols; // @synthesize originalViewportsForEditedSymbols=_originalViewportsForEditedSymbols;
@property(retain, nonatomic) MSBackButtonWindowController *backButtonController; // @synthesize backButtonController=_backButtonController;
@property(retain, nonatomic) NSMutableDictionary *mutableUIMetadata; // @synthesize mutableUIMetadata=_mutableUIMetadata;
@property BOOL cacheFlushInProgress; // @synthesize cacheFlushInProgress=_cacheFlushInProgress;
@property double mostRecentCacheFlushingTime; // @synthesize mostRecentCacheFlushingTime=_mostRecentCacheFlushingTime;
@property(retain, nonatomic) NSTimer *resetHiddenSelectionHandlesTimer; // @synthesize resetHiddenSelectionHandlesTimer=_resetHiddenSelectionHandlesTimer;
@property(retain, nonatomic) NSMutableSet *layersWithHiddenSelectionHandles; // @synthesize layersWithHiddenSelectionHandles=_layersWithHiddenSelectionHandles;
@property(nonatomic) BOOL temporarilyDisableSelectionHiding; // @synthesize temporarilyDisableSelectionHiding=_temporarilyDisableSelectionHiding;
@property(nonatomic) BOOL layerListRefreshIsScheduled; // @synthesize layerListRefreshIsScheduled=_layerListRefreshIsScheduled;
@property(retain, nonatomic) MSImmutableDocumentData *documentDataUsedForLayerList; // @synthesize documentDataUsedForLayerList=_documentDataUsedForLayerList;
@property(nonatomic) BOOL nextReadFromURLIsReload; // @synthesize nextReadFromURLIsReload=_nextReadFromURLIsReload;
@property(retain, nonatomic) MSContentDrawViewController *currentContentViewController; // @synthesize currentContentViewController=_currentContentViewController;
@property(nonatomic) BOOL hasOpenedImageFile; // @synthesize hasOpenedImageFile=_hasOpenedImageFile;
@property(copy, nonatomic) MSLayerArray *selectedLayersA; // @synthesize selectedLayersA=_selectedLayersA;
@property(retain, nonatomic) BCSideBarViewController *sidebarController; // @synthesize sidebarController=_sidebarController;
@property(retain, nonatomic) MSFontList *fontList; // @synthesize fontList=_fontList;
@property(retain, nonatomic) MSInspectorController *inspectorController; // @synthesize inspectorController=_inspectorController;
@property(retain, nonatomic) MSHistoryMaker *historyMaker; // @synthesize historyMaker=_historyMaker;
@property(readonly, nonatomic) MSCacheManager *cacheManager; // @synthesize cacheManager=_cacheManager;
@property(retain, nonatomic) MSEventHandlerManager *eventHandlerManager; // @synthesize eventHandlerManager=_eventHandlerManager;
@property(retain, nonatomic) MSDocumentData *documentData; // @synthesize documentData=_documentData;
@property(retain, nonatomic) MSActionController *actionsController; // @synthesize actionsController=_actionsController;
@property(retain, nonatomic) MSToolbarConstructor *toolbarConstructor; // @synthesize toolbarConstructor=_toolbarConstructor;
@property(retain, nonatomic) NSView *canvasPlaceholderView; // @synthesize canvasPlaceholderView=_canvasPlaceholderView;
@property(retain, nonatomic) NSView *inspectorPlaceholderView; // @synthesize inspectorPlaceholderView=_inspectorPlaceholderView;
@property(nonatomic) __weak MSMainSplitViewController *splitViewController; // @synthesize splitViewController=_splitViewController;
@property(retain, nonatomic) NSView *messageView; // @synthesize messageView=_messageView;
@property(retain, nonatomic) NSWindow *documentWindow; // @synthesize documentWindow=_documentWindow;
- (void).cxx_destruct;
@property(nonatomic) double pageListHeight;
- (void)resetCloudShare;
@property(readonly, nonatomic) NSString *publisherFileName;
- (void)copySVG:(id)arg1;
- (id)documentData:(id)arg1 metadataForKey:(id)arg2 object:(id)arg3;
- (void)documentData:(id)arg1 storeMetadata:(id)arg2 forKey:(id)arg3 object:(id)arg4;
@property(retain, nonatomic) NSDictionary *UIMetadata;
- (void)setFileURL:(id)arg1;
- (void)removeViewportForArtboard:(id)arg1;
- (BOOL)canRestoreViewportAfterArtboardEdit:(id)arg1;
- (void)restoreViewportAfterArtboardEdit:(id)arg1;
- (void)storeViewport:(id)arg1 andInstance:(id)arg2 forArtboard:(id)arg3;
- (void)resetHiddenSelectionHandlesTimerAction:(id)arg1;
- (void)documentData:(id)arg1 immediatelyShowSelectionForLayer:(id)arg2;
- (void)documentData:(id)arg1 temporarilyHideSelectionForLayer:(id)arg2;
- (void)temporarilyDisableSelectionHidingDuringBlock:(CDUnknownBlockType)arg1;
- (BOOL)shouldDrawSelectionForLayer:(id)arg1;
- (void)flagsChangedNotification:(id)arg1;
- (void)sidebarController:(id)arg1 hoveredLayerDidChangeTo:(id)arg2;
- (id)sidebarControllerContextMenuItemsForCurrentSelection:(id)arg1;
- (void)sidebarController:(id)arg1 validateRemovalOfPage:(id)arg2 withRemovalBlock:(CDUnknownBlockType)arg3;
- (void)sidebarController:(id)arg1 didChangeSelection:(id)arg2;
- (void)sidebarControllerDidUpdate:(id)arg1;
- (void)refreshLayerListIfNecessary;
- (void)scheduleLayerListRefresh;
- (void)showPagesList;
- (void)refreshSidebarWithMask:(unsigned long long)arg1;
- (void)updateSliceCount;
- (void)debugRunJSAPIUnitTests:(id)arg1;
- (void)debugCountObject:(id)arg1 counts:(id)arg2;
- (void)debugCountObjects:(id)arg1;
- (void)logBuggyBezierPaths;
- (void)determineCurrentArtboard;
- (void)layerSelectionDidChange;
- (void)pageTreeLayoutDidChange;
- (void)layerTreeLayoutDidChange;
- (void)currentArtboardDidChange;
- (void)sliceDidChangeVisibility:(id)arg1;
- (void)changeTextLayerFont:(id)arg1;
- (void)debugStressTestRendering:(id)arg1;
- (void)layerPositionPossiblyChanged;
- (id)addBlankPage;
- (void)toggleClickThrough:(id)arg1;
- (void)findLayer:(id)arg1;
- (void)toggleLayersAndInspectorVisibility:(id)arg1;
- (void)toggleInspectorVisibility:(id)arg1;
- (BOOL)isInspectorVisible;
- (void)toggleLayerListVisibility:(id)arg1;
- (BOOL)isLayerListVisible;
- (void)renameLayer:(id)arg1;
- (void)windowDidExitVersionBrowser:(id)arg1;
- (void)windowDidEnterVersionBrowser:(id)arg1;
- (void)colorMagnifierAction:(id)arg1;
- (BOOL)isRulersVisible;
- (void)toggleRulers;
- (BOOL)currentPopoverHandlesColorMagnifier;
- (void)copyCSSAttributes:(id)arg1;
- (id)pages;
- (id)layerStyles;
- (void)removePage:(id)arg1;
- (void)setCurrentPage:(id)arg1;
- (id)artboards;
- (id)grid;
- (id)document;
- (void)pasteStyle:(id)arg1;
- (void)copyStyle:(id)arg1;
- (void)layoutSettings:(id)arg1;
- (void)gridSettings:(id)arg1;
- (void)setStyleAsDefault:(id)arg1;
- (void)returnToDefaultHandler:(id)arg1;
- (id)defaultHandler;
- (id)setCurrentHandlerKey:(id)arg1;
- (id)toggleHandlerKey:(id)arg1;
- (void)reloadInspector;
- (void)redrawView;
- (void)reloadView;
- (void)refreshOverlayOfViews;
- (void)refreshOverlayInRect:(struct CGRect)arg1;
- (id)rootDelegate;
- (void)refreshAfterArtboardDeletion;
- (void)deleteSymbolMasters:(id)arg1;
- (void)closePath:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)historyMakerDidProgressHistory:(id)arg1;
- (void)historyMakerDidRevertHistory:(id)arg1;
- (void)historyMaker:(id)arg1 didApplyHistoryUpdate:(unsigned long long)arg2;
- (void)redoAction:(id)arg1;
- (void)undoAction:(id)arg1;
- (void)moveThroughHistoryBackInTime:(BOOL)arg1;
- (void)documentDidChange:(id)arg1;
- (void)registerHistoryMomentTitle:(id)arg1;
- (void)updateSelectionFollowingChangeToImmutableDocumentData;
- (void)changeToImmutableDocumentData:(id)arg1 pageChanged:(BOOL)arg2;
- (void)setupHistory;
- (void)commitHistoryIfNecessary:(id)arg1;
- (void)flushCachesIfNecessary;
- (id)currentVerticalRulerData;
- (id)currentHorizontalRulerData;
- (void)zoomValueDidChange;
- (void)documentData:(id)arg1 sharedObjectDidChange:(id)arg2;
- (void)performPostPageSwitchUpdates;
- (void)documentData:(id)arg1 didChangeToPage:(id)arg2;
- (BOOL)inspectorIsMain;
- (void)selectToolbarItemWithIdentifier:(id)arg1;
- (id)closestVisibleIdentifierInToolbarForIdentifier:(id)arg1;
- (BOOL)isSeparatorIdentifier:(id)arg1;
- (void)reversePath:(id)arg1;
- (void)flagsChanged:(id)arg1;
- (void)windowDidResize:(id)arg1;
- (id)currentHandlerKey;
- (id)currentHandler;
- (void)updateFilterSettings;
- (void)onFilterChanged:(id)arg1;
- (void)toggleSliceInteraction:(id)arg1;
- (void)toggleLayerInteraction:(id)arg1;
- (void)toggleLayerHighlight:(id)arg1;
- (void)toggleSelection:(id)arg1;
- (void)validateMenuItemTitleAndState:(id)arg1;
- (BOOL)shouldEnableLocalSharing;
- (BOOL)hasArtboards;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)layerWouldOverlapExistingLayer:(id)arg1 inGroup:(id)arg2;
- (void)offsetLayerIfNecessary:(id)arg1 forInsertingInGroup:(id)arg2;
- (void)addLayer:(id)arg1 changeName:(BOOL)arg2;
- (void)addLayer:(id)arg1;
- (id)findCurrentArtboardGroup;
- (void)setCurrentArtboard:(id)arg1;
- (void)coalescedDetermineArtboardNotification:(id)arg1;
- (void)putSelectionBackInCanvasIfPossible;
- (void)coalescedSelectionDidChangeNotification:(id)arg1;
- (id)findSelectedLayers;
- (void)saveDocumentAs:(id)arg1;
- (id)duplicateAndReturnError:(id *)arg1;
- (id)currentPage;
- (void)exportPDFBook:(id)arg1;
- (void)exportSliceLayers:(id)arg1;
@property(retain, nonatomic) NSArray *exportableLayerSelection; // @synthesize exportableLayerSelection=_exportableLayerSelection;
- (id)allExportableLayers;
- (void)returnToNormalHandler;
- (void)currentHandlerChanged;
- (id)windowNibName;
@property(nonatomic) double zoomValue;
@property(nonatomic) struct CGPoint scrollOrigin;
- (id)toolbar;
- (BOOL)shouldCreateToolbar;
- (void)windowControllerDidLoadNib:(id)arg1;
- (void)loadLayerListPanel;
@property(readonly, nonatomic) MSImmutableDocumentData *immutableDocumentData;
- (void)resetDocumentData:(id)arg1;
- (void)unbindLayerSliceInteraction;
- (void)bindLayerSliceInteraction;
- (void)loadInspectorPanel;
- (void)windowDidExitFullScreen:(id)arg1;
- (void)windowWillEnterFullScreen:(id)arg1;
- (void)awakeFromNib;
- (void)updateCountDownButton;
- (void)wireDocumentDataToUI;
- (id)currentView;
- (id)printOperationWithSettings:(id)arg1 error:(id *)arg2;
- (void)windowWillClose:(id)arg1;
- (void)windowDidResignKey:(id)arg1;
- (void)windowDidBecomeKey:(id)arg1;
- (void)windowDidEndSheet:(id)arg1;
- (void)windowWillBeginSheet:(id)arg1;
- (unsigned long long)window:(id)arg1 willUseFullScreenPresentationOptions:(unsigned long long)arg2;
- (id)window;
- (void)dealloc;
- (void)close;
- (void)setDelegatesToNil;
- (void)createActions;
- (void)setSelectedLayers:(id)arg1;
- (id)selectedLayers;
- (id)init;
- (void)hideMessage:(id)arg1;
- (void)hideMessage;
- (id)shadowViewForContentView:(id)arg1 cornerRadius:(double)arg2;
- (void)displayMessage:(id)arg1 timeout:(double)arg2;
- (void)displayMessage:(id)arg1;
- (void)showMessage:(id)arg1;
- (void)stopAccessingFolderToken:(id)arg1;
- (id)startAccessingFolder:(id)arg1 tokenName:(id)arg2;
- (id)dataForRequest:(id)arg1 ofType:(id)arg2;
- (void)saveExportRequest:(id)arg1 toFile:(id)arg2;
- (id)exportRequestWithName:(id)arg1 rect:(struct CGRect)arg2;
- (id)exportRequestForArtboardOrSlice:(id)arg1;
- (void)saveArtboardOrSlice:(id)arg1 toFile:(id)arg2;
- (id)askForUserInput:(id)arg1 ofType:(long long)arg2 initialValue:(id)arg3;
- (id)askForUserInput:(id)arg1 initialValue:(id)arg2;
- (void)warnAboutOldVersion;
- (BOOL)askToOpenDocumentRepairingMetadata;
- (BOOL)askToOpenDocumentWithMissingFonts:(id)arg1 savingWillChangeFonts:(BOOL)arg2;
- (void)alertDocumentCorruptionWasDetected;
- (void)resetImportedDocument:(id)arg1;
- (BOOL)readImageFromPath:(id)arg1 error:(id *)arg2;
- (id)bitmapLayerWithImageAtURL:(id)arg1;
- (id)addLayerFromImageAtURL:(id)arg1 toGroup:(id)arg2 fitPixels:(BOOL)arg3 error:(id *)arg4;
- (void)migrateUIMetadataWithDocumentData:(id)arg1;
- (BOOL)readFromDocumentWrapper:(id)arg1 ofType:(id)arg2 wasMigrated:(BOOL)arg3 corruptionDetected:(char *)arg4 error:(id *)arg5;
- (BOOL)processValidationCode:(unsigned long long)arg1 wrapper:(id)arg2 missingFonts:(id)arg3 error:(id *)arg4;
- (id)migrateWithXPCFromURL:(id)arg1 error:(id *)arg2;
- (BOOL)validateWrapperWithXPC:(id)arg1 error:(id *)arg2;
- (BOOL)validateLocallyWithWrapper:(id)arg1 error:(id *)arg2;
- (BOOL)readDocumentFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)revertToContentsOfURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)readEPSFromURL:(id)arg1 error:(id *)arg2;
- (BOOL)readPDFFromURL:(id)arg1 error:(id *)arg2;
- (BOOL)readSVGFromURL:(id)arg1 error:(id *)arg2;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (void)reportSaveActionAtURL:(id)arg1 wasAutosave:(BOOL)arg2;
- (BOOL)writeToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 originalContentsURL:(id)arg4 error:(id *)arg5;
- (BOOL)canAsynchronouslyWriteToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3;
- (void)saveToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)actionClasses;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

