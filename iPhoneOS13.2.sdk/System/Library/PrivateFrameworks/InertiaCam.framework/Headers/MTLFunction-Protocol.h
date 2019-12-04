//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSArray, NSDictionary, NSString;
@protocol MTLArgumentEncoder, MTLDevice;

@protocol MTLFunction 
@property(readonly) NSDictionary *functionConstantsDictionary;
@property(readonly) NSString *name;
@property(readonly) NSArray *stageInputAttributes;
@property(readonly) NSArray *vertexAttributes;
@property(readonly) long long patchControlPointCount;
@property(readonly) unsigned long long patchType;
@property(readonly) unsigned long long functionType;
@property(readonly) id <MTLDevice> device;
@property(copy) NSString *label;
- (id <MTLArgumentEncoder>)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id *)arg2;
- (id <MTLArgumentEncoder>)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1;
@end

