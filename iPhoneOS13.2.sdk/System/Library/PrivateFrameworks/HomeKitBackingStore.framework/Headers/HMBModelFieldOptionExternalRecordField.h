//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitBackingStore/HMBModelFieldOption.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMBModelFieldOptionExternalRecordField : HMBModelFieldOption
{
    _Bool _encrypted;
    NSString *_fieldName;
}

@property(readonly, nonatomic) _Bool encrypted; // @synthesize encrypted=_encrypted;
@property(readonly, nonatomic) NSString *fieldName; // @synthesize fieldName=_fieldName;
- (void)applyTo:(id)arg1;
- (id)initWithExternalRecordField:(id)arg1 encrypted:(_Bool)arg2;

@end

