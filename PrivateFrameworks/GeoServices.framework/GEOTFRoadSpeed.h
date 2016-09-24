/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTFRoadSpeed : PBCodable <NSCopying> {
    int  _color;
    double  _confidence;
    unsigned int  _decayTimeWindowInMinutes;
    double  _endOffset;
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _geoIds;
    int  _geoid;
    struct { 
        unsigned int color : 1; 
        unsigned int confidence : 1; 
        unsigned int decayTimeWindowInMinutes : 1; 
        unsigned int endOffset : 1; 
        unsigned int speedKph : 1; 
        unsigned int startOffset : 1; 
        unsigned int hidden : 1; 
    }  _has;
    BOOL  _hidden;
    struct { 
        double *list; 
        unsigned int count; 
        unsigned int size; 
    }  _latitudeCoordinates;
    struct { 
        double *list; 
        unsigned int count; 
        unsigned int size; 
    }  _longitudeCoordinates;
    NSData * _openlr;
    NSMutableArray * _predictedSpeeds;
    unsigned int  _speedKph;
    double  _startOffset;
    NSData * _zilch;
}

@property (nonatomic) int color;
@property (nonatomic) double confidence;
@property (nonatomic) unsigned int decayTimeWindowInMinutes;
@property (nonatomic) double endOffset;
@property (nonatomic, readonly) int*geoIds;
@property (nonatomic, readonly) unsigned int geoIdsCount;
@property (nonatomic) int geoid;
@property (nonatomic) BOOL hasColor;
@property (nonatomic) BOOL hasConfidence;
@property (nonatomic) BOOL hasDecayTimeWindowInMinutes;
@property (nonatomic) BOOL hasEndOffset;
@property (nonatomic) BOOL hasHidden;
@property (nonatomic, readonly) BOOL hasOpenlr;
@property (nonatomic) BOOL hasSpeedKph;
@property (nonatomic) BOOL hasStartOffset;
@property (nonatomic, readonly) BOOL hasZilch;
@property (nonatomic) BOOL hidden;
@property (nonatomic, readonly) float*latitudeCoordinates;
@property (nonatomic, readonly) unsigned int latitudeCoordinatesCount;
@property (nonatomic, readonly) float*longitudeCoordinates;
@property (nonatomic, readonly) unsigned int longitudeCoordinatesCount;
@property (nonatomic, retain) NSData *openlr;
@property (nonatomic, retain) NSMutableArray *predictedSpeeds;
@property (nonatomic) unsigned int speedKph;
@property (nonatomic) double startOffset;
@property (nonatomic, retain) NSData *zilch;

+ (Class)predictedSpeedType;

- (int)StringAsColor:(id)arg1;
- (void)addGeoIds:(int)arg1;
- (void)addLatitudeCoordinates:(float)arg1;
- (void)addLongitudeCoordinates:(float)arg1;
- (void)addPredictedSpeed:(id)arg1;
- (void)clearGeoIds;
- (void)clearLatitudeCoordinates;
- (void)clearLongitudeCoordinates;
- (void)clearPredictedSpeeds;
- (int)color;
- (id)colorAsString:(int)arg1;
- (float)confidence;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)decayTimeWindowInMinutes;
- (id)description;
- (id)dictionaryRepresentation;
- (float)endOffset;
- (int*)geoIds;
- (int)geoIdsAtIndex:(unsigned int)arg1;
- (unsigned int)geoIdsCount;
- (int)geoid;
- (BOOL)hasColor;
- (BOOL)hasConfidence;
- (BOOL)hasDecayTimeWindowInMinutes;
- (BOOL)hasEndOffset;
- (BOOL)hasHidden;
- (BOOL)hasOpenlr;
- (BOOL)hasSpeedKph;
- (BOOL)hasStartOffset;
- (BOOL)hasZilch;
- (unsigned int)hash;
- (BOOL)hidden;
- (BOOL)isEqual:(id)arg1;
- (float*)latitudeCoordinates;
- (float)latitudeCoordinatesAtIndex:(unsigned int)arg1;
- (unsigned int)latitudeCoordinatesCount;
- (float*)longitudeCoordinates;
- (float)longitudeCoordinatesAtIndex:(unsigned int)arg1;
- (unsigned int)longitudeCoordinatesCount;
- (void)mergeFrom:(id)arg1;
- (id)openlr;
- (id)predictedSpeedAtIndex:(unsigned int)arg1;
- (id)predictedSpeeds;
- (unsigned int)predictedSpeedsCount;
- (BOOL)readFrom:(id)arg1;
- (void)setColor:(int)arg1;
- (void)setConfidence:(float)arg1;
- (void)setDecayTimeWindowInMinutes:(unsigned int)arg1;
- (void)setEndOffset:(float)arg1;
- (void)setGeoIds:(int*)arg1 count:(unsigned int)arg2;
- (void)setGeoid:(int)arg1;
- (void)setHasColor:(BOOL)arg1;
- (void)setHasConfidence:(BOOL)arg1;
- (void)setHasDecayTimeWindowInMinutes:(BOOL)arg1;
- (void)setHasEndOffset:(BOOL)arg1;
- (void)setHasHidden:(BOOL)arg1;
- (void)setHasSpeedKph:(BOOL)arg1;
- (void)setHasStartOffset:(BOOL)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setLatitudeCoordinates:(float*)arg1 count:(unsigned int)arg2;
- (void)setLongitudeCoordinates:(float*)arg1 count:(unsigned int)arg2;
- (void)setOpenlr:(id)arg1;
- (void)setPredictedSpeeds:(id)arg1;
- (void)setSpeedKph:(unsigned int)arg1;
- (void)setStartOffset:(float)arg1;
- (void)setZilch:(id)arg1;
- (unsigned int)speedKph;
- (float)startOffset;
- (void)writeTo:(id)arg1;
- (id)zilch;

@end