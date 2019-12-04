//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudDocsDaemon/_BRCOperation.h>

#import <CloudDocsDaemon/BRCOperationSubclass-Protocol.h>

@class BRCAccountSession, NSString;

__attribute__((visibility("hidden")))
@interface BRCZoneHealthReportOperation : _BRCOperation <BRCOperationSubclass>
{
    _Bool shouldPerformAnotherBatch;
    BRCAccountSession *_session;
}

- (void)main;
- (void)_reportRecords:(id)arg1 requestID:(unsigned long long)arg2;
- (_Bool)shouldPerformAnotherBatch;
- (_Bool)shouldRetryForError:(id)arg1;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

