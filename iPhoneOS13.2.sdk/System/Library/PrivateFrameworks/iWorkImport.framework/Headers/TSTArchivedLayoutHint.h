//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSDArchivedHint-Protocol.h>

@class NSString, TSTLayoutHint;

__attribute__((visibility("hidden")))
@interface TSTArchivedLayoutHint : TSPObject <TSDArchivedHint>
{
    TSTLayoutHint *mHint;
}

@property(retain, nonatomic) TSTLayoutHint *hint; // @synthesize hint=mHint;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 hint:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

