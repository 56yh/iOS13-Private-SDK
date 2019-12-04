//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SiriUI/SiriUITemplateViewController.h>

#import <SiriUI/SiriUILabelStackTemplateViewDelegate-Protocol.h>

@class NSString, SiriUITextTemplateView;
@protocol SiriUITextTemplateModel;

@interface SiriUITextTemplateViewController : SiriUITemplateViewController <SiriUILabelStackTemplateViewDelegate>
{
}

- (_Bool)labelStackTemplateViewShouldLayoutCompressed:(id)arg1;
- (void)_textTemplateViewDisclosed:(id)arg1;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) id <SiriUITextTemplateModel> templateModel; // @dynamic templateModel;
@property(retain, nonatomic) SiriUITextTemplateView *view; // @dynamic view;

@end

