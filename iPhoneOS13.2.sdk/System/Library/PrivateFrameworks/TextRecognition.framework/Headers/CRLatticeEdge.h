//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CRLatticeEdge : NSObject
{
    NSString *_symbol;
    unsigned long long _edgeIndex;
    double _score;
    unsigned long long _startNode;
    unsigned long long _endNode;
}

@property(readonly) unsigned long long endNode; // @synthesize endNode=_endNode;
@property(readonly) unsigned long long startNode; // @synthesize startNode=_startNode;
@property(readonly) double score; // @synthesize score=_score;
@property(readonly) unsigned long long edgeIndex; // @synthesize edgeIndex=_edgeIndex;
@property(readonly, nonatomic) NSString *symbol; // @synthesize symbol=_symbol;
- (id)initWithSymbol:(id)arg1 index:(unsigned long long)arg2 score:(double)arg3 startNode:(unsigned long long)arg4 endNode:(unsigned long long)arg5;

@end

