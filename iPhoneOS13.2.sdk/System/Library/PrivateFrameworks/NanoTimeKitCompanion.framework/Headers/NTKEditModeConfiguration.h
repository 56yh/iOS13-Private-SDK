//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSMutableDictionary, NTKEditOption;

@interface NTKEditModeConfiguration : NSObject <NSSecureCoding>
{
    NSMutableDictionary *_optionsBySlot;
    NTKEditOption *_nilSlotOption;
}

+ (_Bool)supportsSecureCoding;
- (id)initWithJSONObjectRepresentation:(id)arg1 editOptionClass:(Class)arg2 forDevice:(id)arg3;
- (id)JSONObjectRepresentation;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_alphabeticalSlots;
- (id)description;
- (id)dailySnapshotKey;
- (id)editOptionForSlot:(id)arg1;
- (void)setEditOption:(id)arg1 forSlot:(id)arg2;
- (void)enumerateSlotsWithBlock:(id /* block */)arg1;

@end

