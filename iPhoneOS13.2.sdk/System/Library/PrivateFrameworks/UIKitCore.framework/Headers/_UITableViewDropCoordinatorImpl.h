//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UITableViewDropCoordinator-Protocol.h>

@class NSArray, NSIndexPath, NSString, UITableViewDropProposal;
@protocol UIDropSession, _UITableViewDropCoordinatorDelegate;

__attribute__((visibility("hidden")))
@interface _UITableViewDropCoordinatorImpl : NSObject <_UITableViewDropCoordinator>
{
    id <_UITableViewDropCoordinatorDelegate> _delegate;
    NSArray *_items;
    NSIndexPath *_destinationIndexPath;
    NSIndexPath *_translatedDestinationIndexPath;
    UITableViewDropProposal *_proposal;
    id <UIDropSession> _session;
}

@property(retain, nonatomic) id <UIDropSession> session; // @synthesize session=_session;
@property(retain, nonatomic) UITableViewDropProposal *proposal; // @synthesize proposal=_proposal;
@property(retain, nonatomic, getter=_translatedDestinationIndexPath, setter=_setTranslatedDestinationIndexPath:) NSIndexPath *translatedDestinationIndexPath; // @synthesize translatedDestinationIndexPath=_translatedDestinationIndexPath;
@property(retain, nonatomic) NSIndexPath *destinationIndexPath; // @synthesize destinationIndexPath=_destinationIndexPath;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) __weak id <_UITableViewDropCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_dropItem:(id)arg1 toCell:(id)arg2 withPreviewParameters:(id)arg3;
- (void)_dropItem:(id)arg1 toTarget:(id)arg2;
- (id)dropItem:(id)arg1 toTarget:(id)arg2;
- (void)_dropItem:(id)arg1 toRowAtIndexPath:(id)arg2;
- (id)dropItem:(id)arg1 toRowAtIndexPath:(id)arg2;
- (id)dropItem:(id)arg1 intoRowAtIndexPath:(id)arg2 rect:(struct CGRect)arg3;
- (id)_dropItem:(id)arg1 toPlaceholderInsertedAtIndexPath:(id)arg2 withReuseIdentifier:(id)arg3 rowHeight:(double)arg4 cellUpdateHandler:(id /* block */)arg5;
- (id)dropItem:(id)arg1 toPlaceholderInsertedAtIndexPath:(id)arg2 withReuseIdentifier:(id)arg3 rowHeight:(double)arg4 cellUpdateHandler:(id /* block */)arg5;
- (id)dropItem:(id)arg1 toPlaceholder:(id)arg2;
@property(readonly, nonatomic) id <UIDropSession> _dropSession;
@property(readonly, nonatomic) UITableViewDropProposal *_dropProposal;
@property(readonly, nonatomic) NSIndexPath *_destinationIndexPath;
@property(readonly, nonatomic) NSArray *_items;
- (void)_translateSourceIndexPathsOfDropItems:(id /* block */)arg1;
- (void)_translateDestinationIndexPath:(id /* block */)arg1;
- (id)_sourceIndexPaths;
- (id)initWithDelegate:(id)arg1 destinationIndexPath:(id)arg2 dropProposal:(id)arg3 session:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

