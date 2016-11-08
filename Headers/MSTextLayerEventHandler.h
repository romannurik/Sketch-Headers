//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSEventHandler.h"

#import "MSFirstLineTypesetterDelegate.h"
#import "MSTextLayerEditingDelegate.h"
#import "NSLayoutManagerDelegate.h"
#import "NSTextStorageDelegate.h"
#import "NSTextViewDelegate.h"
#import "NSWindowDelegate.h"

@class MSTextLayer, MSTextLayerTextView, MSTextWindow, NSNumber, NSString, NSTextStorage, NSTimer;

@interface MSTextLayerEventHandler : MSEventHandler <NSLayoutManagerDelegate, NSTextViewDelegate, NSTextStorageDelegate, NSWindowDelegate, MSTextLayerEditingDelegate, MSFirstLineTypesetterDelegate>
{
    MSTextLayerTextView *_textView;
    MSTextWindow *_textViewWindow;
    MSTextLayer *_textLayer;
    NSTextStorage *_textStorage;
    NSTimer *_updateInsertionPointColorTimer;
    NSNumber *_firstBaselineOffsetBeforeEditing;
}

@property(retain, nonatomic) NSNumber *firstBaselineOffsetBeforeEditing; // @synthesize firstBaselineOffsetBeforeEditing=_firstBaselineOffsetBeforeEditing;
@property(retain, nonatomic) NSTimer *updateInsertionPointColorTimer; // @synthesize updateInsertionPointColorTimer=_updateInsertionPointColorTimer;
@property(retain, nonatomic) NSTextStorage *textStorage; // @synthesize textStorage=_textStorage;
@property(retain, nonatomic) MSTextLayer *textLayer; // @synthesize textLayer=_textLayer;
@property(retain, nonatomic) MSTextWindow *textViewWindow; // @synthesize textViewWindow=_textViewWindow;
@property(retain, nonatomic) MSTextLayerTextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (BOOL)shouldExitOnContentViewResize;
- (BOOL)validateMenuItem:(id)arg1;
- (void)magnifyWithEvent:(id)arg1;
- (BOOL)canDuplicate;
- (void)dealloc;
- (BOOL)shouldDrawLayerSelection;
- (id)toolbarIdentifier;
- (void)doTextModification:(CDUnknownBlockType)arg1;
- (void)removeTextTransform:(id)arg1;
- (void)makeLowercase:(id)arg1;
- (void)makeUppercase:(id)arg1;
- (void)applyTextTransform:(id)arg1;
- (void)removeTextView;
- (void)handlerWillLoseFocus;
- (void)commitPendingEdits;
- (BOOL)handlesHistoryCoalescing;
- (BOOL)textView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)textStorage:(id)arg1 didProcessEditing:(unsigned long long)arg2 range:(struct _NSRange)arg3 changeInLength:(long long)arg4;
- (void)selectAll:(id)arg1;
- (struct CGRect)windowFrameForDrawView;
- (void)scrollWheel:(id)arg1;
- (void)zoomValueWillChangeTo:(double)arg1;
- (void)viewDidScroll:(id)arg1;
- (BOOL)absoluteMouseDown:(struct CGPoint)arg1 clickCount:(unsigned long long)arg2 flags:(unsigned long long)arg3;
- (void)adjustTextViewFrame;
- (void)scheduleUpdateInsertionPointColorTimer;
- (void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(BOOL)arg3;
- (id)firstBaselineOffset;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)textDidChange:(id)arg1;
- (void)dispatchTryPutFirstFocusBack;
- (void)tryPutFirstFocusBack;
- (void)windowDidResignKey:(id)arg1;
- (void)adjustForegroundColor;
- (id)insertionPointColor;
- (double)averageLuminanceOfImage:(struct CGImage *)arg1;
- (struct CGImage *)newTextLayerImageFromWindowBackingStore;
- (void)beginEditing;
- (void)updateTextViewStyling;
- (double)baselineAdjustmentForLayoutManager:(id)arg1;
- (struct CGRect)frameForTextViewOnCanvasBasedOnBaseFrame:(struct CGRect)arg1;
- (struct CGRect)frameForTextView;
- (void)makeTextWindow;
- (void)makeTextView;
- (void)addTextView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)reloadFollowingBackgroundChangesToDocument;
- (void)handlerGotFocus;
- (void)setupTextLayer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

