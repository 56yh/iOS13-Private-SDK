//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class DOCTag;
@protocol DOCTagEditorPresenter;

@protocol DOCTagEditorDelegate 
- (void)tagEditor:(id <DOCTagEditorPresenter>)arg1 userDidDeselectTag:(DOCTag *)arg2;
- (void)tagEditor:(id <DOCTagEditorPresenter>)arg1 userDidSelectTag:(DOCTag *)arg2;
- (void)tagEditor:(id <DOCTagEditorPresenter>)arg1 userDidCreateTag:(DOCTag *)arg2;
@end

