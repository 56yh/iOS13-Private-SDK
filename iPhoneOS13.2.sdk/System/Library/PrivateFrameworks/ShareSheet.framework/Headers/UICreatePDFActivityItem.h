//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ShareSheet/QLPreviewItem-Protocol.h>

@class NSString, NSURL;

@interface UICreatePDFActivityItem : NSObject <QLPreviewItem>
{
    NSURL *_previewItemURL;
    NSString *_previewItemTitle;
}

@property(retain, nonatomic) NSString *previewItemTitle; // @synthesize previewItemTitle=_previewItemTitle;
@property(retain, nonatomic) NSURL *previewItemURL; // @synthesize previewItemURL=_previewItemURL;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

