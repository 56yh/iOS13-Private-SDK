//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface _UIActivityItemCustomizationGroup : NSObject
{
    NSString *_name;
    NSString *_identifier;
    NSArray *_customizations;
}

@property(readonly, copy, nonatomic) NSArray *customizations; // @synthesize customizations=_customizations;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)_initGroupWithName:(id)arg1 identifier:(id)arg2 customizations:(id)arg3;

@end

