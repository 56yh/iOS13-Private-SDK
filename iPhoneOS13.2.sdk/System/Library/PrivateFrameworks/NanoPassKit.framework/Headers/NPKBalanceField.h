//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoPassKit/NPKBalanceField-Protocol.h>

@class NSString;

@interface NPKBalanceField : NSObject <NPKBalanceField>
{
    _Bool _isPrimaryBalance;
    NSString *_label;
    NSString *_formattedValue;
    NSString *_identifier;
}

@property(readonly, nonatomic) _Bool isPrimaryBalance; // @synthesize isPrimaryBalance=_isPrimaryBalance;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *formattedValue; // @synthesize formattedValue=_formattedValue;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (id)initWithLabel:(id)arg1 formattedValue:(id)arg2 identifier:(id)arg3;
- (id)initWithLabel:(id)arg1 formattedValue:(id)arg2 identifier:(id)arg3 primaryBalance:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

