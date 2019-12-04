//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class ETDataTensor, NSString;
@protocol ETDataProvider;

@protocol ETTaskContext
- (_Bool)saveNetwork:(NSString *)arg1 inplace:(_Bool)arg2 error:(id *)arg3;
- (id <ETDataProvider>)doInferenceOnData:(id <ETDataProvider>)arg1 error:(id *)arg2;
- (ETDataTensor *)getTensorNamed:(NSString *)arg1;
- (_Bool)setTensorNamed:(NSString *)arg1 withValue:(ETDataTensor *)arg2 error:(id *)arg3;
@end

