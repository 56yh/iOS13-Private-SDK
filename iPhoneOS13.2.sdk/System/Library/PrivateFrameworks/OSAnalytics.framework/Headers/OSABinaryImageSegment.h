//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class OSASymbolInfo;

@interface OSABinaryImageSegment : NSObject
{
    int _source;
    OSASymbolInfo *_symbolInfo;
    unsigned long long _used_index;
}

@property unsigned long long used_index; // @synthesize used_index=_used_index;
@property int source; // @synthesize source=_source;
@property(readonly, nonatomic) OSASymbolInfo *symbolInfo; // @synthesize symbolInfo=_symbolInfo;
- (id)details;
- (id)initWithAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 for:(unsigned char [16])arg3;
- (id)initWithSymbol:(id)arg1;

@end

