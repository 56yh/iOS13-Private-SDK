//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import <DataDetectorsUI/CNContactViewControllerDelegate-Protocol.h>
#import <DataDetectorsUI/DDRemoteActionViewService-Protocol.h>

@class CNContactViewController, DDAction, NSString;
@protocol DDRemoteActionPresenter;

__attribute__((visibility("hidden")))
@interface DDAddToContactsViewController : UINavigationController <DDRemoteActionViewService, CNContactViewControllerDelegate>
{
    id <DDRemoteActionPresenter> _proxy;
    DDAction *_action;
    CNContactViewController *_personViewController;
}

+ (id)alternateNameForContact:(id)arg1;
+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
@property(retain) DDAction *action; // @synthesize action=_action;
- (void)contactViewControllerForUnknownContactDidEndAddingToContacts:(id)arg1;
- (void)contactViewControllerForUnknownContactDidBeginAddingToContacts:(id)arg1;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (void)setCancellable:(_Bool)arg1;
- (void)cancelPressed:(id)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)doneWithAddingContact;
- (void)adaptForPresentationInPopover:(_Bool)arg1;
- (void)setCancelButtonVisible:(_Bool)arg1;
- (void)prepareForAction:(id)arg1;
- (struct CGSize)preferredContentSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

