//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Stocks/SCKZoneCommand-Protocol.h>

@class NSString;

@interface SCWatchlistReorderSymbol2Command : NSObject <SCKZoneCommand>
{
    NSString *_symbol;
    NSUInteger _toIndex;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSUInteger toIndex; // @synthesize toIndex=_toIndex;
@property(readonly, copy, nonatomic) NSString *symbol; // @synthesize symbol=_symbol;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)executeWithZone:(id)arg1;
- (id)initWithSymbol:(id)arg1 toIndex:(NSUInteger)arg2;

@end

