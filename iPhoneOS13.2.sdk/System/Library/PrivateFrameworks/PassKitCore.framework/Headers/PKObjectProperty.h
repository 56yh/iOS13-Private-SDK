//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PKObjectProperty : NSObject
{
    NSString *_name;
    NSString *_variableName;
    Class _aClass;
    unsigned long long _type;
    NSString *_valueGetter;
}

@property(readonly, copy, nonatomic) NSString *valueGetter; // @synthesize valueGetter=_valueGetter;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) Class aClass; // @synthesize aClass=_aClass;
@property(readonly, copy, nonatomic) NSString *variableName; // @synthesize variableName=_variableName;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithProperty:(struct objc_property *)arg1;

@end

