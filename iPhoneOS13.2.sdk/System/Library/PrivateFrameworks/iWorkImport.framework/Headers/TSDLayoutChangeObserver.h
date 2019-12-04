//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSKChangeSourceObserver-Protocol.h>

@class NSString, TSDLayoutController, TSKDocumentRoot;

__attribute__((visibility("hidden")))
@interface TSDLayoutChangeObserver : NSObject <TSKChangeSourceObserver>
{
    TSKDocumentRoot *_documentRoot;
    TSDLayoutController *_layoutController;
}

- (void)didProcessAllChanges;
- (void)processChanges:(id)arg1 forChangeSource:(id)arg2;
- (void)preprocessChanges:(id)arg1 forChangeSource:(id)arg2;
- (void)i_layoutUnregistered:(id)arg1;
- (void)i_layoutRegistered:(id)arg1;
- (id)initWithDocumentRoot:(id)arg1 layoutController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

