//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/OADEffectsParent-Protocol.h>

@class NSArray, NSString, OADFill;

__attribute__((visibility("hidden")))
@interface OADTableBackground : NSObject <OADEffectsParent>
{
    OADFill *mFill;
    NSArray *mEffects;
}

// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (BOOL)hasEffects;
- (void)setEffects:(id)arg1;
- (id)effects;
- (void)setFill:(id)arg1;
- (id)fill;

@end

