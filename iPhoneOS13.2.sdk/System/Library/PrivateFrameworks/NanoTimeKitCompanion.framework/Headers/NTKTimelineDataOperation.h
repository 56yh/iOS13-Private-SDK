//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CLKCComplicationDataSource, CLKComplication;
@protocol CLKComplicationDataSource;

@interface NTKTimelineDataOperation : NSObject
{
    CLKCComplicationDataSource *_localDataSource;
    id <CLKComplicationDataSource> _remoteDataSource;
    CLKComplication *_remoteComplication;
    _Bool _started;
    _Bool _canceled;
}

+ (id)operationWithRemoteDataSource:(id)arg1 complication:(id)arg2;
+ (id)operationWithLocalDataSource:(id)arg1;
@property(readonly, nonatomic) _Bool canceled; // @synthesize canceled=_canceled;
@property(readonly, nonatomic) _Bool started; // @synthesize started=_started;
- (id)_finalizedValidEntries:(id)arg1;
- (_Bool)_validateTemplate:(id)arg1;
- (_Bool)_validateEntry:(id)arg1;
- (void)_cancel;
- (void)_start;
- (void)cancel;
- (void)start;

@end

