//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class UIDragInteraction, UIDropInteraction;

@protocol UITextDragDropSupport 
@property(readonly, nonatomic, getter=isDropActive) _Bool dropActive;
@property(readonly, nonatomic, getter=isDragActive) _Bool dragActive;
@property(readonly, nonatomic) UIDropInteraction *dropInteraction;
@property(readonly, nonatomic) UIDragInteraction *dragInteraction;
- (void)invalidateDropCaret;
- (void)notifyTextInteraction;
- (_Bool)accessibilityCanDrag;
@end

