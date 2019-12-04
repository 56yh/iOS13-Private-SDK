//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface SUItemValidator : NSObject
{
    NSMutableArray *_collectionTests;
    NSMutableArray *_itemTests;
}

@property(readonly, nonatomic) NSArray *validationTests;
- (_Bool)validateItems:(id)arg1 offers:(id)arg2 error:(id *)arg3;
- (_Bool)validateItems:(id)arg1 error:(id *)arg2;
- (void)removeValidationTest:(id)arg1;
- (void)addItemValidationTests:(id)arg1;
- (void)addCollectionValidationTests:(id)arg1;
- (void)dealloc;

@end

