//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NeutrinoCore/NUAdjustment.h>

@class NSDictionary, NSMutableDictionary;

@interface NUGenericAdjustment : NUAdjustment
{
    NSMutableDictionary *_settings;
}

- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
@property(copy, nonatomic) NSDictionary *settings;
- (id)initWithAdjustmentSchema:(id)arg1;

@end

