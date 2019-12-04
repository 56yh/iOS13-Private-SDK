//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSDiagnosticManager;

@interface MSComposeAttachmentAnalyticController : NSObject
{
    long long _totalDrawingsInsertedCount;
    MSDiagnosticManager *_diagnosticManager;
}

@property(retain, nonatomic) MSDiagnosticManager *diagnosticManager; // @synthesize diagnosticManager=_diagnosticManager;
- (void)_submitFinalDrawingInsertCount:(long long)arg1 sentMessage:(_Bool)arg2;
- (void)abandonMessageWithActualDrawingInsertCount:(long long)arg1;
- (void)sendMessageWithActualDrawingInsertCount:(long long)arg1;
- (id)initWithDiagnosticManager:(id)arg1 totalDrawingsInsertedCount:(long long)arg2;

@end

