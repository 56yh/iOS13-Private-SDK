//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, PDFRenderingProperties;
@protocol OS_dispatch_queue, PDFPageBackgroundManagerDelegate;

__attribute__((visibility("hidden")))
@interface PDFPageBackgroundManagerPrivate : NSObject
{
    id <PDFPageBackgroundManagerDelegate> documentDelegate;
    PDFRenderingProperties *renderingProperties;
    unsigned long long activePageIndex;
    NSMutableDictionary *backgroundImageCache[3];
    NSObject<OS_dispatch_queue> *workQueue;
    _Bool isCancled;
    _Bool isWorking;
    _Bool willForceUpdate;
}


@end

