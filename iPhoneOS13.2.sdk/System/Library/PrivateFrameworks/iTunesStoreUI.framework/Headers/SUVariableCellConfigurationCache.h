//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface SUVariableCellConfigurationCache : NSObject
{
    NSMutableDictionary *_caches;
    id _cellContext;
    double _tableHeight;
}

@property(retain, nonatomic) id cellContext; // @synthesize cellContext=_cellContext;
- (void)resetLayoutCaches;
- (void)reset;
@property(readonly, nonatomic) NSArray *caches;
- (id)cacheForClass:(Class)arg1;
- (void)dealloc;
- (id)initWithTableHeight:(double)arg1;

@end

