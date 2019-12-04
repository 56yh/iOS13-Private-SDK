//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIActivity.h>

#import <WorkflowUI/WFGallerySubmissionControllerDelegate-Protocol.h>

@class NSString, WFWorkflow;

@interface WFSubmitToGalleryActivity : UIActivity <WFGallerySubmissionControllerDelegate>
{
    WFWorkflow *_workflow;
}

@property(retain, nonatomic) WFWorkflow *workflow; // @synthesize workflow=_workflow;
- (void)cancel;
- (void)gallerySubmissionDidCancel:(id)arg1;
- (void)gallerySubmissionDidFinish:(id)arg1;
- (id)activityViewController;
- (void)prepareWithActivityItems:(id)arg1;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

