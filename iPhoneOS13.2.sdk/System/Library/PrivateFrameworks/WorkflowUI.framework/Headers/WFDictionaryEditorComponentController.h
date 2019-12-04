//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ComponentKit/CKStatefulViewComponentController.h>

#import <WorkflowUI/WFListEditorViewDelegate-Protocol.h>

@class NSString, WFListEditingContext;

@interface WFDictionaryEditorComponentController : CKStatefulViewComponentController <WFListEditorViewDelegate>
{
    WFListEditingContext *_editingContext;
}

+ (void)configureStatefulView:(id)arg1 forComponent:(id)arg2;
+ (id)newStatefulView:(id)arg1;
@property(retain, nonatomic) WFListEditingContext *editingContext; // @synthesize editingContext=_editingContext;
- (void)listEditorView:(id)arg1 didUpdateWithItem:(id)arg2;
- (void)componentTreeDidDisappear;
- (void)componentTreeWillAppear;
- (void)willRelinquishStatefulView:(id)arg1;
- (void)didAcquireStatefulView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

