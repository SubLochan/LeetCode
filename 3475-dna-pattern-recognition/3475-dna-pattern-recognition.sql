/* Write your PL/SQL query statement below */
SELECT 
    sample_id,
    dna_sequence,
    species,
    (SELECT COUNT(*) 
     FROM Samples 
     WHERE sample_id = s.sample_id 
       AND dna_sequence LIKE 'ATG%') AS has_start,
    (SELECT COUNT(*) 
     FROM Samples 
     WHERE sample_id = s.sample_id 
       AND (dna_sequence LIKE '%TAA' 
            OR dna_sequence LIKE '%TAG' 
            OR dna_sequence LIKE '%TGA')) AS has_stop,
    (SELECT COUNT(*) 
     FROM Samples 
     WHERE sample_id = s.sample_id 
       AND dna_sequence LIKE '%ATAT%') AS has_atat,
    (SELECT COUNT(*) 
     FROM Samples 
     WHERE sample_id = s.sample_id 
       AND dna_sequence LIKE '%GGG%') AS has_ggg
FROM Samples s
ORDER BY sample_id;
