//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSArray, NSData, NSDictionary, _PARQueryFeatures_CategoryStats;

@protocol _PARQueryFeatures_Stats 
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSArray *CepLongs;
@property(copy, nonatomic) NSArray *Ceps;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_PARQueryFeatures_CategoryStats *)CepLongAtIndex:(unsigned long long)arg1;
- (unsigned long long)CepLongCount;
- (void)addCepLong:(_PARQueryFeatures_CategoryStats *)arg1;
- (void)clearCepLong;
- (_PARQueryFeatures_CategoryStats *)CepAtIndex:(unsigned long long)arg1;
- (unsigned long long)CepCount;
- (void)addCep:(_PARQueryFeatures_CategoryStats *)arg1;
- (void)clearCep;
@end

