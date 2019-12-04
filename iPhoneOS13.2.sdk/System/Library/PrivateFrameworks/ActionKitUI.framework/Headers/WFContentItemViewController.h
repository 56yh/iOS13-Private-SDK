//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <ActionKitUI/UIDocumentInteractionControllerDelegate-Protocol.h>

@class NSString, WFContentItem;

__attribute__((visibility("hidden")))
@interface WFContentItemViewController : UITableViewController <UIDocumentInteractionControllerDelegate>
{
    WFContentItem *_contentItem;
}

@property(readonly, nonatomic) WFContentItem *contentItem; // @synthesize contentItem=_contentItem;
- (id)documentInteractionControllerViewControllerForPreview:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;
- (id)initWithContentItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

