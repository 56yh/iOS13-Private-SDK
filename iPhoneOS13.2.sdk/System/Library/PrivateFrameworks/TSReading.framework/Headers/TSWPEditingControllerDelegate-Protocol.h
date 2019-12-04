//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSArray, TSWPEditingController, TSWPRep, TSWPStorage, UIView, UIViewController;
@protocol TSWPStyleProvider;

@protocol TSWPEditingControllerDelegate 

@optional
@property(readonly, nonatomic) _Bool editorAllowsListInteraction;
@property(readonly, nonatomic) _Bool editorAllowsRubyInteraction;
@property(readonly, nonatomic) _Bool editorAllowsHyperlinkInteraction;
@property(readonly, nonatomic) _Bool editorAllowsCaret;
@property(readonly, nonatomic) _Bool editorAllowsKeyboard;
@property(readonly, nonatomic) _Bool editorAllowsParagraphMode;
@property(readonly, nonatomic) _Bool editorAllowsMagnifier;
@property(readonly, nonatomic) _Bool editorAllowsEditMenu;
@property(readonly, nonatomic) _Bool editorShouldAlwaysBeInParagraphMode;
- (void)didSetTappedSelectionWithWPEditor:(TSWPEditingController *)arg1 onWPRep:(TSWPRep *)arg2;
- (_Bool)disallowEditingOfTextStringWithStorage:(TSWPStorage *)arg1;
- (UIView *)formatBarAccessoryView;
- (UIViewController *)viewControllerForPresenting;
- (void)knobTrackingDidEnd;
- (void)knobTrackingDidBegin;
- (void)showCustomEditMenuForStorage:(TSWPStorage *)arg1 range:(struct _NSRange)arg2;
- (_Bool)willChangeContentOffsetIfKeyboardHidden;
- (void)filterPasteboardTextStorages:(NSArray *)arg1 forTargetStorage:(TSWPStorage *)arg2;
- (id <TSWPStyleProvider>)styleProviderForStorage:(TSWPStorage *)arg1;
- (void)editingController:(TSWPEditingController *)arg1 willDeleteCharactersInRange:(struct _NSRange)arg2;
@end

