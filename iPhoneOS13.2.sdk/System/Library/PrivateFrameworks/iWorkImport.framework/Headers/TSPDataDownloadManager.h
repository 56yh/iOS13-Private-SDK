//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TSPObjectContext;
@protocol TSPDataDownloadManagerDelegate;

__attribute__((visibility("hidden")))
@interface TSPDataDownloadManager : NSObject
{
    TSPObjectContext *_context;
    id <TSPDataDownloadManagerDelegate> _delegate;
}

@property(nonatomic) __weak id <TSPDataDownloadManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)documentResourceDataWithDigestString:(id)arg1 locator:(id)arg2 filename:(id)arg3;
- (id)unmaterializedRemoteData;
- (id)initWithContext:(id)arg1;
- (id)init;

@end

