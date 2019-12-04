//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface NPKPaymentProvisioningFlowPickerItem : NSObject
{
    NSString *_title;
    NSArray *_products;
    NSString *_identifier;
}

+ (id)itemWithIdentifier:(id)arg1 products:(id)arg2;
+ (id)itemWithIdentifier:(id)arg1 title:(id)arg2 products:(id)arg3;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSArray *products; // @synthesize products=_products;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)description;

@end

