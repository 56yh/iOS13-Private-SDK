//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSTStockDetails : NSObject
{
    NSString *_symbol;
    long long _attribute;
}

+ (id)detailsWithSymbol:(id)arg1 attribute:(long long)arg2;
@property(nonatomic) long long attribute; // @synthesize attribute=_attribute;
@property(retain, nonatomic) NSString *symbol; // @synthesize symbol=_symbol;
- (_Bool)isEqualToStockDetails:(id)arg1;
- (id)initWithSymbol:(id)arg1 attribute:(long long)arg2;

@end

